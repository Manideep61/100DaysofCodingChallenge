class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        for (char task : tasks) {
            freq[task - 'A']++;
        }
        sort(freq.begin(), freq.end());
        int maxFreq = freq[25];
        int idleSlots = (maxFreq - 1) * n;
        for (int i = 24; i >= 0 && freq[i] > 0; --i) {
            idleSlots -= min(freq[i], maxFreq - 1);
        }
        idleSlots = max(0, idleSlots);
        return tasks.size() + idleSlots;
    }
};
