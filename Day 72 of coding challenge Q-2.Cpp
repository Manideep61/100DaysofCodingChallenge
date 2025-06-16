class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         unordered_map<int, int> prefixSumCount;
        int currSum = 0;
        int count = 0;
        prefixSumCount[0] = 1;
        for (int i = 0; i < nums.size(); ++i) {
            currSum += nums[i];
            if (prefixSumCount.find(currSum - k) != prefixSumCount.end()) {
            count += prefixSumCount[currSum - k];
            }
        prefixSumCount[currSum]++;
        }
        return count;
    }
};
