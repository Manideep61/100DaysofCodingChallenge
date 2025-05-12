class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>sample;
        if(n<=1) return false;
        
        for(int i =0;i<n;i++){
            if(sample.empty()){
                sample.push(s[i]);
            }else if(s[i]==')'){
                if( sample.top()!='('){
                    return false;
                }
                sample.pop();
            }else if(s[i]=='}'){
                
                if(sample.top()!='{'){
                    return false;
                }
                sample.pop();
            }else if(s[i]==']'){
               
                if(sample.top()!='['){
                    return false;
                }
                sample.pop();
            }else{
                sample.push(s[i]);
            }
        }
       
       if(!sample.empty()) return false;
       return true;
    }
};
