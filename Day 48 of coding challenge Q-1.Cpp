class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        int temp1=0,temp2=0,count=0,result=0;
        for(int i=0;i<n;i++){
            temp1=s[i];
            if(i+1<n){
                temp2=s[i+1];
            }
            count=temp1-temp2;
            result += abs(count);
        }
        return result;
    }
};
