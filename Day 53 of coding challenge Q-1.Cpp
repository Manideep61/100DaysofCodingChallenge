class Solution {
public:
    void dfs(vector<vector<int>>& grid,int & temp, int i,int j){
        int n = grid.size();
        int m = grid[0].size();
        grid[i][j]=0;
        temp++;
        if(i+1<n && grid[i+1][j]==1){
            dfs(grid,temp,i+1,j);
        }
        if(i-1>=0 && grid[i-1][j]==1){
            dfs(grid,temp,i-1,j);
        }
        if(j+1<m && grid[i][j+1]==1){
            dfs(grid,temp,i,j+1);
        }
        if(j-1>=0 && grid[i][j-1]==1){
            dfs(grid,temp,i,j-1);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int n = grid.size();
       int m = grid[0].size();
       int result =0;
       for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int temp=0;
                    dfs(grid,temp,i,j);
                    result= max(result,temp);
                    temp=0;
                }
            }
        } 
        return result;
    }
};
