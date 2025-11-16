class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        int pr = nums[0], maxSum = nums[0], minPr = nums[0];

        for (int i = 1; i < size; i++) {
            if (nums[i] < 0)
                swap(pr, minPr);

            pr = max(nums[i], pr * nums[i]);
            minPr = min(nums[i], minPr * nums[i]);

            maxSum = max(maxSum, pr);
        }

        return maxSum;
    }
};
