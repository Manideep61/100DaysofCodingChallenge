class Solution {
public:
    int minLength(string s) {
        stack<char> temp;
        stack<char>temp1;
        int result =0;
        int n= s.size();
        for(int i=n-1;i>=0;i--){
            temp.push(s[i]);
        }
        while(!temp.empty()){
            char x = temp.top();
            temp.pop();
            if(!temp1.empty()){
                char y = temp1.top();
                if((x=='B' && y == 'A') || (x=='D' && y == 'C')){
                    temp1.pop();
                    continue;
                }
            }
            temp1.push(x);
        }
        result = temp1.size();
        return result;
    }
};
