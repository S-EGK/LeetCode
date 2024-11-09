class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length() == 0) {
            return true;
        }
        if (t.length() == 0) {
            return false;
        }
        int i = 0;
        int j = 0;
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i += 1;
            }
            j += 1;
        }
        return i == s.length();
    }
};