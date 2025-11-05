class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxVal = nums[0];
        int maxIndex = 0;
        int minVal = nums[0];
        int minIndex = 0;
        for(int i=1; i<n; i++){
            if(nums[i]>maxVal){
                maxVal = nums[i];
                maxIndex = i;
            }
            else if(nums[i]<minVal){
                minVal = nums[i];
                minIndex = i;
            }
        }
        int ans1 = max(maxIndex, minIndex)+1;
        int ans2 = n - min(maxIndex, minIndex);
        int ans3 = min(maxIndex, minIndex)+1 + (n-max(minIndex, maxIndex));
        return min({ans1, ans2, ans3});
    }
};
