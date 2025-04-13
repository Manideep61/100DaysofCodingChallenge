class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>tp(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                tp[i].push_back(matrix[j][i]);
            }
        }
        return tp;
    }
};

