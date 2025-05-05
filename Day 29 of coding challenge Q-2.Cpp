class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int x= ops.size();
        int result=0;
        if(x==0){
            result = m*n;
            return result;
        }
        int min1 = m;
        int min2 = n;
        for(int i=0;i<x;i++){
            int t1 = ops[i][0];
            int t2 = ops[i][1];
            min1 = min(min1,t1);
            min2 = min(min2,t2);
        }
        result = min1 * min2;
        return result;
    }
};
