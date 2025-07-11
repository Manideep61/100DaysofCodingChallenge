class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int left = 0, res = 0;
        vector<int> count(3, 0);
        for (int right = 0; right < n; ++right) {
            count[s[right] - 'a']++;
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                res += n - right;
                count[s[left] - 'a']--;
                left++;
            }
        }
        return res;
    }
};
