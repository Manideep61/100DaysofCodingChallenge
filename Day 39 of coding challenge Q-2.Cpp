class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        stack<char> st;
        bool result = true;
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            char x = s[i];
            st.push(x);
        }
        int m = words.size(); 
        for(int i=0;i<m;i++){
            int x = words[i].size();
            for(int j=0;j<x;j++){
                if(!st.empty() && words[i][j]==st.top()){
                    result = true;
                    st.pop();
                }else if(!st.empty() && words[i][j]!=st.top()){
                    return false;
                }else if(st.empty()){
                    return false;
                }
            }
            if(st.empty()){
                return true;
            }
        }
        if(!st.empty()) {
            return false;
        }
        return result;
    }
};
