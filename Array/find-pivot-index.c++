 class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        vector<int>sumleft(n);
        vector<int>sumright(n);
        int sum =0;
        for(int i =0;i<n;i++){
            sum = sum+nums[i];
            sumleft[i] =sum;
        }
        sum =0;
        for(int i =n-1;i>=0;i--){
            sum = sum+nums[i];
            sumright[i] =sum;
        }
        for(int i=0;i<n;i++){
        if(sumleft[i]==sumright[i])
        return i;
        }
        return -1;
    }
};
