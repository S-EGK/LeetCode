# Python3

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        for i in range(m):
                nums1[i] = nums1[i]
        for j in range(n):
            nums1[m+j] = nums2[j]
        nums1 = nums1.sort()

# Python
class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        for i in range(m):
                nums1[i] = nums1[i]
        for j in range(n):
            nums1[m+j] = nums2[j]
        nums1 = nums1.sort()
