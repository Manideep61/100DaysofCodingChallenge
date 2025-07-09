class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        vector<int> duration(n), prefixSum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            duration[i] = endTime[i] - startTime[i];
            prefixSum[i + 1] = prefixSum[i] + duration[i];
        }
        int maxFree = 0;
        for (int i = k - 1; i < n; ++i) {
            int startIdx = i - k + 1;
            int occupiedTime = prefixSum[i + 1] - prefixSum[startIdx];
            int windowStart = (startIdx == 0) ? 0 : endTime[startIdx - 1];
            int windowEnd = (i == n - 1) ? eventTime : startTime[i + 1];
            int freeTime = windowEnd - windowStart - occupiedTime;
            maxFree = max(maxFree, freeTime);
        }
        return maxFree;
    }
};
