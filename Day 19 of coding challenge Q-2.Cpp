class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = n*n+1;
        map<int,int>max;
        vector<int>output;
        for(int i =1;i<m;i++){
            max[i]=0;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                max[grid[i][j]]++;
            }
        }
        for(auto i:max){
            if(i.second>1){
                output.push_back(i.first);
                break;
            }
        }
        for(auto i:max){
            if(i.second==0){
                output.push_back(i.first);
                break;
            }
        }
        return output;
    }
};
