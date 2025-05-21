class Solution {
public:
    int minimumMoves(string s) {
        int n= s.size();
        int result=0;
        for(int i=0;i<n;){
            if(s[i]=='X'){
                result++;
                i+=3;
            }else{
                i++;
            }
        }
        return result;
    }
};
