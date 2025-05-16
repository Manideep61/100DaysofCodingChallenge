class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> name;
        int n = s.size();
        int m=t.size();
        if(m==n){
            for(int i=0;i<n;i++){
                name[s[i]] = name[s[i]]+1;
            }
            for(int i=0;i<m;i++){
                if(name[t[i]]!=0){
                    name[t[i]]--;
                }
                else{
                    return false;
                }
            }
        }else{
            return false;
        }
        return true;
   
    }
};

