class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        int result=0,count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                count+=accounts[i][j];
            }
            result=max(count,result);
            count=0;
        }
        return result;
    }
};
