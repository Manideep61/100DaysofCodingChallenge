class Solution {
public:
    int maxDepth(string s) {
        stack<char> temp;
        int result =0, tempnum=0;
        int n = s.size();
        for(int i = n-1;i>=0;i--){
            temp.push(s[i]);
        }
        while(!temp.empty()){
            char x = temp.top();
            temp.pop();
            if(x=='('){
                tempnum++;
                result = max(result,tempnum);
            }
            if(x==')'){
                tempnum--;
            }
        }
        return result;
    }
};
