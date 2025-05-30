class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<string> algorithm;
        for(int i =0;i<n;i++){
            if(tokens[i].compare("+")==0){
                int x = stoi(algorithm.top());
                algorithm.pop();
                int y = stoi(algorithm.top());
                algorithm.pop();
                int z = x+y;
                string mani = to_string(z);
                algorithm.push(mani);
            }else if(tokens[i].compare("-")==0){
                int x = stoi(algorithm.top());
                algorithm.pop();
                int y = stoi(algorithm.top());
                algorithm.pop();
                int z = y-x;
                string mani = to_string(z);
                algorithm.push(mani);
            }else if(tokens[i].compare("*")==0){
                int x = stoi(algorithm.top());
                algorithm.pop();
                int y = stoi(algorithm.top());
                algorithm.pop();
                int z = x*y;
                string mani = to_string(z);
                algorithm.push(mani);
            }else if(tokens[i].compare("/")==0){
                int x = stoi(algorithm.top());
                algorithm.pop();
                int y = stoi(algorithm.top());
                algorithm.pop();
                int z = floor(y/x);
                string mani = to_string(z);
                algorithm.push(mani);
            }else{
                algorithm.push(tokens[i]);
            }
        }
        int result = stoi(algorithm.top());
        return result;
    }
};
