class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        list1 = set()
        nums.sort()
        for k in range(len(nums)):
            i, j = k+1, len(nums) - 1
            while i < j:
                sum = nums[i] + nums[j] + nums[k]
                if sum == 0:
                    list1.add((nums[k], nums[i], nums[j]))
                    i += 1
                    j -= 1
                elif sum < 0:
                    i += 1
                else:
                    j -= 1
        return list(list1)