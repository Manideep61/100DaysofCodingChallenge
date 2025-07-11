class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        int windowSize = n - k;
        int windowSum = 0;
        for (int i = 0; i < windowSize; ++i) {
            windowSum += cardPoints[i];
        }
        int minSubarraySum = windowSum;
        for (int i = windowSize; i < n; ++i) {
            windowSum += cardPoints[i] - cardPoints[i - windowSize];
            minSubarraySum = min(minSubarraySum, windowSum);
        }
        return total - minSubarraySum;
    }
};
