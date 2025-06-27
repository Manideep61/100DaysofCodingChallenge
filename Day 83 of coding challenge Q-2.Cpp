class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 0) return "";
        int start = 0, maxLen = 1;
        for (int i = 0; i < n; i++) {
            int l1 = i, r1 = i;
            while (l1 >= 0 && r1 < n && s[l1] == s[r1]) {
                if (r1 - l1 + 1 > maxLen) {
                    start = l1;
                    maxLen = r1 - l1 +1;
                } 
                l1--; r1++;
            }
            int l2 = i, r2 = i + 1;
            while (l2 >= 0 && r2 < n && s[l2] == s[r2]) {
                if (r2 - l2 + 1 > maxLen) {
                    start = l2;
                    maxLen = r2 - l2 + 1;
                }
                l2--; r2++;
            }
        }
        return s.substr(start, maxLen);
    }
};
