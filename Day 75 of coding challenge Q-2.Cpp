class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        int n = strs.size();
        string result = "";
        for(int i =0;i<strs[0].size();i++){
            char c = strs[0][i];
            for(int j =0;j<n;j++){
                if (i >= strs[j].size() || strs[j][i] != c) {
                    return result;
                }
            }
            result += c;
        }
        return result;
    }
};
