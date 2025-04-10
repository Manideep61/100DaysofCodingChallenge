class Solution {
public:
    void dfs(vector<vector<int>>& grid,int & count,int i,int j){
        int n = grid.size();
        int m = grid[0].size();
        grid[i][j]=2;
        if(i+1>=n || grid[i+1][j]==0 ){
            count++;
        }
        if(i-1<0 || grid[i-1][j]==0){
            count++;
        }
        if(j+1>=m || grid[i][j+1]==0){
            count++;
        }
        if( j-1<0 || grid[i][j-1]==0){
            count++;
        }
        if(i+1<n && grid[i+1][j]==1){
            dfs(grid,count,i+1,j);
        }
        if(i-1>=0 && grid[i-1][j]==1){
            dfs(grid,count,i-1,j);
        }
        if(j+1<m && grid[i][j+1]==1){
            dfs(grid,count,i,j+1);
        }
        if(j-1>=0 && grid[i][j-1]==1){
            dfs(grid,count,i,j-1);
        }
    }
int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    dfs(grid,count,i,j);
                }
            }
        }
        return count;
    }
};
