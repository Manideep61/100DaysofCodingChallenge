class Solution {
public:
    void temp(int num,vector<vector<int>>&isConnected,vector<int>&mat){
        mat[num]=1;
        int m = isConnected.size();
        for(int i =0;i<m;i++){
            if(isConnected[num][i]==1 && mat[i]==0){
                temp(i,isConnected,mat);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int count = 0;
        vector<int>mat(n,0);
        for(int i =0;i<n;i++){
            if(mat[i]==0){
                temp(i,isConnected,mat);
                count++;
            }
        }
        return count;
    }
};
