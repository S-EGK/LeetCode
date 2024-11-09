class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        if (accumulate(nums.begin(), nums.end(), 0) < target) {
            return 0;
        }

        int curr_sum = 0;
        int n = nums.size();
        int min_len = n + 1;
        int start = 0;
        int end = 0;

        while (end < n) {
            while (curr_sum < target && end < n) {
                curr_sum += nums[end];
                end += 1;
            }
            while (curr_sum >= target && start < n) {
                if (end - start < min_len) {
                    min_len = end - start;
                }
                curr_sum -= nums[start];
                start += 1;
            }
        }
        return min_len;
    }
};