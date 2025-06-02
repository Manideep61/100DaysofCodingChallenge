class Solution {
public:
    void dfs(int i ,int j , vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        grid[i][j]=1;
        if(i+1<n && grid[i+1][j]==0){
            dfs(i+1,j,grid);
        }
        if(i-1>0 && grid[i-1][j]==0){
            dfs(i-1,j,grid);
        }
        if(j+1<m && grid[i][j+1]==0){
            dfs(i,j+1,grid);
        }
        if(j-1>0 && grid[i][j-1]==0){
            dfs(i,j-1,grid);
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i =0;i<n;i++){
            if(grid[i][0]==0){
                dfs(i,0,grid);
            }
            if(grid[i][m-1]==0){
                dfs(i,m-1,grid);
            }
        }
        for(int j =0;j<m;j++){
            if(grid[0][j]==0){
                dfs(0,j,grid);
            }
            if(grid[n-1][j]==0){
                dfs(n-1,j,grid);
            }
        }
        int result = 0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]==0){
                    dfs(i,j,grid);
                    result++;
                }
            }
        }
        return result;
    }
};
