class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for (auto ch : s) {
            if (isalnum(ch)){
                ans += isalpha(ch) ? tolower(ch) : ch;
            }
        }
        for(int i=0; i < ans.length()/2; i++) {
            if (ans[i] != ans[ans.length() -1 - i]) {
                return false;
            }
        }
        return true;
    }
};