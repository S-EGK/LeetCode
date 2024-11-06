class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> r(nums.size());

        for (int i=0; i<nums.size(); i++) {
            r[(i+k) % nums.size()] = nums[i];
        }

        for (int i=0; i<nums.size(); i++) {
            nums[i] = r[i];
        }
    }
};