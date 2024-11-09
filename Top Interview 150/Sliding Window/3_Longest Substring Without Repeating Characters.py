class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        seen = {}
        count = 0
        l = 0
        for i in range(len(s)):
            curr_char = s[i]
            if curr_char in seen and seen[curr_char] >= l:
                l = seen[curr_char] + 1
            else:
                count = max(count, i-l+1)
            seen[curr_char] = i
        return count