class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        stack<char>mani;
        string outcome;
        int convert;
        for(int i=0;i<n;i++){
            convert = s[i];
            if(mani.empty()){
                mani.push(s[i]);
            }else if(convert>=65 && convert<=90){
                int m = mani.top();
                if(convert==m-32){
                    mani.pop();
                }else{
                    mani.push(s[i]);
                
                }
            }else if(convert>=97 && convert<=122){
                int m = mani.top();
                if(convert==m+32){
                    mani.pop();
                }else{
                    mani.push(s[i]);
                }
            }
        }
        while(!mani.empty()){
            outcome = outcome+mani.top();
            mani.pop();
        }
        reverse(outcome.begin(), outcome.end());
        return outcome;
    }
};
