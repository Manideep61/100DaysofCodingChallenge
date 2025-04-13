class Solution {
public:
    void dfs(int i ,int j,int color,int temp,vector<vector<int>>&image){
        int n = image.size();
        int m = image[0].size();
        if (image[i][j] != temp || image[i][j] == color) {
            return;
        }
        image[i][j]=color;

        if(i+1<n && image[i+1][j]==temp){
            dfs(i+1,j,color,temp,image);
        }
        if(i-1>=0 && image[i-1][j]==temp){
            dfs(i-1,j,color,temp,image);
        }
        if(j+1<m && image[i][j+1]==temp){
            dfs(i,j+1,color,temp,image);
        }
        if(j-1>=0 && image[i][j-1]==temp){
            dfs(i,j-1,color,temp,image);
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int temp = image[sr][sc];
        dfs(sr,sc,color,temp,image);
        return image;
    }
};
