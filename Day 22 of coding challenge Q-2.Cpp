class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int>output;
        int result=0,count=0,index=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(result<count){
                result=count;
                index=i;
            }
            count=0;
        }
        output.push_back(index);
        output.push_back(result);
        return output;
    }
};
