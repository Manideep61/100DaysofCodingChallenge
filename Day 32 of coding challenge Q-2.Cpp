class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int result=0;
        string temp1="++X",temp2="X++";
        for(int i =0;i<n;i++){
            int x = operations[i].compare(temp1);
            int y = operations[i].compare(temp2);
            if(x==0 || y==0){
                result++;
            }else{
                result--;
            }
        }
        return result;

    }
};
