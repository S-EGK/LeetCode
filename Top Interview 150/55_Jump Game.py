class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        a = 0
        for i, n in enumerate(nums):
            if i > a:
                return False
            a = max(a, i+n)
        return True