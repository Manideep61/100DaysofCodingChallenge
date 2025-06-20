class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int m = t.size();
        bool result = true;
        map<char,char> temp;
        map<char,char> rev;
        if( n != m){
            return false;
        }
        for(int i =0;i<n;i++){
            temp[s[i]]='#';
            rev[t[i]] = '#';
        }
        for(int i =0;i<n;i++){
            if((temp[s[i]]=='#' && rev[t[i]]=='#') || (temp[s[i]] == t[i] && rev[t[i]] == s[i]) ){
                temp[s[i]]=t[i];
                rev[t[i]] = s[i];
            }else{
                return false;
            }
        }
        return result;
    }
};
