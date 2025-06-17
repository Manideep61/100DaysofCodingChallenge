class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=1;i<numRows+1;i++){
            result.push_back(vector<int>(i));
            for(int j =1;j<i+1;j++){
                if(j==1 || j==i){
                    result[i-1][j-1] =1;
                }else{
                    result[i-1][j-1] = result[i-2][j-1] + result[i-2][j-2];
                }
            }
        }
        return result;
    }
};
