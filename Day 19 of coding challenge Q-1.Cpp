class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = s.size();
        int m = words.size();
        bool y;
        if(m!=n){
            y = false;
            return y;
        }else if(m==n){
            for(int i=0;i<n;i++){
                if(words[i][0]==s[i]){
                    y=true;
                }else{
                    y=false;
                    break;
                }
            }
        }
        return y;
    }
};
