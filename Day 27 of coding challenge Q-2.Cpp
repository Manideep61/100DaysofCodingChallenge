class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        int result=0;
        for(int i=0;i<n;i++){
            int m = timeSeries[i]+duration;
            int x = timeSeries[i];
            if(i<n-1 && m>timeSeries[i+1] ){
                result += timeSeries[i + 1] - x;
            }else{
                result += duration;
            }
        }
        return result;
    }
};
