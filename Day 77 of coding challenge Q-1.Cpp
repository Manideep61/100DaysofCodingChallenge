class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        map<char,int> temp;
        string result;
        for(int i =0;i<n;i++){
            temp[s[i]] += 1; 
        }
        vector<pair<char, int>> freqVec(temp.begin(), temp.end());
        sort(freqVec.begin(), freqVec.end(), [](pair<char, int> &a, pair<char, int> &b) {
            return a.second > b.second;
        });
        for (auto &p : freqVec) {
            result += string(p.second, p.first);
        }
        return result;
    }
};
