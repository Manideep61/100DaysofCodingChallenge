class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> temp;
        int result =0;
        int n = logs.size();
        for(int i = n-1;i>=0;i--){
            temp.push(logs[i]);
        }
        while(!temp.empty()){
            string x = temp.top();
            temp.pop();
            if(x=="../"){
                if(result > 0){
                    result--;
                }
            }else if(x=="./"){
                result = result;
            }else{
                result++;
            }
        }
        return result;
    }
};
