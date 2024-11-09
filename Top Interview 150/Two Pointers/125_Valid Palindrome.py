class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        # convert to lowercase
        s = s.lower()
        # removes spaces and special characters
        s = ''.join(letter for letter in s if letter.isalnum())

        a = 0
        
        for i in range(int(len(s)/2)):
            if s[i] == s[-1-i]:
                a += 1

        if a == int(len(s)/2):
            return True
        else:
            return False