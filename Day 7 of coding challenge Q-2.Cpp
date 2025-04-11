class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> temp(n,vector<int>(m,-1));
        queue<pair<int,int>> store;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    store.push({i,j});
                    temp[i][j]=0;
                }
            }
        }
        while(!store.empty()){
            int x = store.front().first;
            int y = store.front().second;
            store.pop();
            if(x>0 && temp[x-1][y]==-1){
                temp[x-1][y]=temp[x][y]+1;
                store.push({x-1,y});
            }
            if(x<n-1 && temp[x+1][y]==-1){
                temp[x+1][y]=temp[x][y]+1;
                store.push({x+1,y});
            }
            if(y>0 && temp[x][y-1]==-1){
                temp[x][y-1]=temp[x][y]+1;
                store.push({x,y-1});
            }
            if(y<m-1 && temp[x][y+1]==-1){
                temp[x][y+1]=temp[x][y]+1;
                store.push({x,y+1});
            }
        }
        return temp;
    }
};
