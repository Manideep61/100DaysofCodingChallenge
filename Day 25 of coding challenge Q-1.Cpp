class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        if (n == 0) {
            return result;
        }
        int temp1 = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1] + 1) {
                if (temp1 == nums[i - 1]) {
                    result.push_back(to_string(temp1));
                } else {
                    result.push_back(to_string(temp1) + "->" + to_string(nums[i - 1]));
                }
                temp1 = nums[i];
            }
        }
        if (temp1 == nums[n - 1]) {
            result.push_back(to_string(temp1));
        } else {
            result.push_back(to_string(temp1) + "->" + to_string(nums[n - 1]));
        }
        return result;
    }
};
