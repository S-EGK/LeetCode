class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //for i in range(m):
        //        nums1[i] = nums1[i]
        //for j in range(n):
        //    nums1[m+j] = nums2[j]
        //nums1 = nums1.sort()
        for (int i = 0; i < m; i++) {
            nums1[i] = nums1[i];
        }
        for (int j = 0; j < n; j++) {
            nums1[m+j] = nums2[j];
        }
        sort(nums1.begin(), nums1.end());
    }
};