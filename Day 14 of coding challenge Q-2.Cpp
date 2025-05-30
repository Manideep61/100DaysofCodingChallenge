class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n  = mat.size();
        int m = mat[0].size();
        int secondarydiagonal=0,primarydiagonal=0,result=0;
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(i==j){
                    primarydiagonal+=mat[i][j];
                }
                if(i+j==n-1){
                    secondarydiagonal+=mat[i][j];
                }
                if(i+j==n-1 && i==j){
                    primarydiagonal-=mat[i][j];
                }
            }
        }
        result = primarydiagonal+secondarydiagonal;
        return result;
    }
};
