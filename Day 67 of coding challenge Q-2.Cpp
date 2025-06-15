class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       int n = edges.size();
       int m = edges[0].size();
       int output=0;
       map<int,int>mat;
       for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat[edges[i][j]]++;
            }
       }
       for(auto i:mat){
            if(i.second==n){
                output=i.first;
            }
       }
       return output;
    }
};
