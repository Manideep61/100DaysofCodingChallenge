class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int count=0,result=0;
        int i=n-1;
        for( ; i>=0; i--){
            if(s[i]!=' '){
                break;
            }
        }
        for( ;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }else if(s[i]==' '){
                break;
            }
        }
        return count;     
    }
};
