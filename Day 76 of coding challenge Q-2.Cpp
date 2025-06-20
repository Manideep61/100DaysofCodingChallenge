class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        map<char,int> temp;
        bool result = true;
        if(n != m){
            return false;
        }
        for(int i=0;i<n;i++){
            temp[s[i]] += 1;
            temp[t[i]] -= 1;
        }
        for(auto& i : temp){
            if(i.second > 0){
                return false;
            }
        }
        return result;
    }
};
