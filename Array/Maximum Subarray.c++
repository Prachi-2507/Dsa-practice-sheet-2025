class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum = INT_MIN;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            sum += nums[i];
            maxSum = max(sum, maxSum);
            if (sum < 0)
                sum = 0;
        }
        return maxSum;
    }
};
