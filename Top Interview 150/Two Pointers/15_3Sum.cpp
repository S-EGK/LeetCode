class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> list1;
        sort(nums.begin(), nums.end());
        for (int k=0; k<nums.size(); k++) {
            int i = k+1;
            int j = nums.size() - 1;
            while (i < j) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    list1.insert({nums[k], nums[i], nums[j]});
                    i += 1;
                    j -= 1;
                }
                else if (sum < 0) {
                    i += 1;
                }
                else {
                    j -= 1;
                }
            }
        }
        return vector<vector<int>>(list1.begin(), list1.end());
    }
};