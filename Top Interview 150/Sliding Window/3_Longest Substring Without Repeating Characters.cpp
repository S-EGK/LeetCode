class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> seen;
        int count = 0;
        int l = 0;
        char curr_char;
        for (int i=0; i<s.length(); i++) {
            curr_char = s[i];
            if (seen.count(curr_char) && seen[curr_char] >= l) {
                l = seen[curr_char] + 1;
            }
            else {
                count = max(count, i-l+1);
            }
            seen[curr_char] = i;
        }
        return count;
    }
};