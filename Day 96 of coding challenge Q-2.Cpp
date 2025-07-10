class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        vector<int> gaps;
        gaps.push_back(startTime[0]); 
        for (int i = 1; i < n; ++i)
            gaps.push_back(startTime[i] - endTime[i - 1]);
        gaps.push_back(eventTime - endTime.back()); 
        int m = gaps.size();
        vector<int> maxRight(m, 0);
        for (int i = m - 2; i >= 0; --i)
            maxRight[i] = max(maxRight[i + 1], gaps[i + 1]);
        int maxFreeTime = 0, maxLeft = 0;
        for (int i = 1; i < m; ++i) {
            int duration = endTime[i - 1] - startTime[i - 1];
            if (duration <= max(maxLeft, maxRight[i]))
                maxFreeTime = max(maxFreeTime, gaps[i - 1] + gaps[i] + duration);
            maxFreeTime = max(maxFreeTime, gaps[i - 1] + gaps[i]);
            maxLeft = max(maxLeft, gaps[i - 1]);
        }
        return maxFreeTime;
    }
};
