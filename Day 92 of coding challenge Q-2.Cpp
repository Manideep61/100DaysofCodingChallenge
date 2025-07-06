class Solution {
public:
    string removeKdigits(string num, int k) {
        string result;
        for(char digit : num){
            while(!result.empty() && k>0 && result.back()>digit){
                result.pop_back();
                k--;
            }
            result.push_back(digit);
        }
        while (k-- > 0 && !result.empty()) {
            result.pop_back();
        }
        int i=0;
        while (i < result.size() && result[i] == '0') {
            i++;
        }
        string trimmed = result.substr(i);
        return trimmed.empty() ? "0" : trimmed;
    }
};
