class Solution {
public:
    void dfs(vector<vector<int>>& grid,int row,int col,int color,int temp,vector<vector<bool>>& mark,vector<vector<int>> bound){
        int n = grid.size();
        int m = grid[0].size();
        if(row<0 || row >= n || col<0 || col>=m){
            return;
        }
        if(mark[row][col]==true || bound[row][col]!= temp){
            return;
        }
        mark[row][col]=true;
        if(row==0 || col==0 || row==n-1 || col==m-1){
            grid[row][col]=color;
        }
        if(row-1>=0 && bound[row-1][col]!=temp ){
            grid[row][col]=color;
        }
        if(row+1<n && bound[row+1][col]!=temp){
            grid[row][col]=color;
        }
        if(col-1>=0 && bound[row][col-1]!=temp){
            grid[row][col]=color;
        }
        if(col+1<m && bound[row][col+1]!=temp){
            grid[row][col]=color;
        }
        dfs(grid,row-1,col,color,temp,mark,bound);
        dfs(grid,row+1,col,color,temp,mark,bound);
        dfs(grid,row,col-1,color,temp,mark,bound);
        dfs(grid,row,col+1,color,temp,mark,bound);

    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int temp = grid[row][col];
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>bound(n,vector<int>(m,0));
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                bound[i][j]=grid[i][j];
            }
        }
        vector<vector<bool>>mark(n,vector<bool>(m,false));
        dfs(grid,row,col,color,temp,mark,bound);
        return grid;
    }
};
