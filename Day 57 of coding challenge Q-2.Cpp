class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> temp(n,vector<int>(m,-1));
        queue<pair<int,int>> store;
        int result = -1;
        if (grid[0][0]!=0 || grid[n-1][m-1]!=0){
            return -1;
        }
        store.push({0,0});
        temp[0][0]=1;
        while(!store.empty()){
            int x = store.front().first;
            int y = store.front().second;
            store.pop();
            if(x==n-1 && y==m-1){
                return temp[x][y];
                break;
            }
            if(x>0 && grid[x-1][y]==0 && temp[x-1][y] == -1){
                temp[x-1][y]=temp[x][y]+1;
                store.push({x-1,y});
                
            }
            if(x<n-1 && grid[x+1][y]==0 && temp[x+1][y] == -1){
                temp[x+1][y]=temp[x][y]+1;
                store.push({x+1,y});
               
            }
            if(y>0 && grid[x][y-1]==0 && temp[x][y-1] == -1){
                temp[x][y-1]=temp[x][y]+1;
                store.push({x,y-1});
            }
            if(y<m-1 && grid[x][y+1]==0 && temp[x][y+1] == -1){
                temp[x][y+1]=temp[x][y]+1;
                store.push({x,y+1});
            }
            if(x<n-1 && y<m-1 && grid[x+1][y+1]==0 && temp[x+1][y+1]==-1){
                temp[x+1][y+1]=temp[x][y]+1;
                store.push({x+1,y+1});
            }
            if(x<n-1 && y>0 && grid[x+1][y-1]==0 && temp[x+1][y-1]==-1){
                temp[x+1][y-1]=temp[x][y]+1;
                store.push({x+1,y-1});
            }
            if(x>0 && y<m-1 && grid[x-1][y+1]==0 && temp[x-1][y+1]==-1){
                temp[x-1][y+1]=temp[x][y]+1;
                store.push({x-1,y+1});
            }
            if(x>0 && y>0 && grid[x-1][y-1]==0 && temp[x-1][y-1]==-1){
                temp[x-1][y-1]=temp[x][y]+1;
                store.push({x-1,y-1});
            }
        }
        return result;
    }
};
