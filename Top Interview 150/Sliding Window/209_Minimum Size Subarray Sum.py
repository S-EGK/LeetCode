class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """

        if sum(nums) < target:
            return 0
            
        curr_sum = 0
        min_len = len(nums) + 1

        start = 0
        end = 0

        while (end < len(nums)):
            while (curr_sum < target and end < len(nums)):
                curr_sum += nums[end]
                end += 1
            
            while (curr_sum >= target and start < len(nums)):
                if (end - start < min_len):
                    min_len = end - start
                
                curr_sum -= nums[start]
                start += 1

        return min_len