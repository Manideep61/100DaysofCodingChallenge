class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.size();
        char output;
        map<char,int> name;

        for(int i=0;i<n;i++){
            if(name[s[i]]==0){
                name[s[i]] = name[s[i]]+1;
            }else if(name[s[i]]!=0){
                output=s[i];
                return output;
            }
        }  
        return  output;
    }
};
