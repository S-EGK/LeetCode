class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        k = 1
        p = 0

        for i in range(1, len(nums)):
            if p != 1:
                if nums[i] == nums[i-1]:
                    nums[k] = nums[i]
                    k += 1
                    p = 1
                elif nums[i] != nums[i-1]:
                    nums[k] = nums[i]
                    k += 1
            elif p == 1:
                if nums[i] != nums[i-1]:
                    nums[k] = nums[i]
                    p = 0
                    k += 1
        return k
    
        """
        k = 2

        for i in range(2, len(nums)):
            if nums[i] != nums[k - 2]:
                nums[k] = nums[i]
                k += 1 

        return k
        """

# Python3
