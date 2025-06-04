class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";
        stack<char> temp1;
        stack<char>temp2;
        int n = s.size();
        for(int i=0;i<n;i++){
            temp1.push(s[i]);
        }
        while(!temp1.empty()){
            char x = temp1.top();
            temp1.pop();
            if(!temp2.empty() && temp2.top()==x){
                temp2.pop();
            }else{
                temp2.push(x);
            }
        }
        while(!temp2.empty()){
            result += temp2.top();
            temp2.pop();
        }
        
        return result;
    }
};
