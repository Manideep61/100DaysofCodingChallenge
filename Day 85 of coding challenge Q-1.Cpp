class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> withIndex;
        for(int i=0;i<nums.size();i++){
            withIndex.push_back({nums[i], i});
        }
        sort(withIndex.begin(), withIndex.end(), [](auto& a, auto& b) {
            return a.first > b.first;
        });
        vector<int> indices;
        for(int i=0;i<k;i++){
            indices.push_back(withIndex[i].second);
        }
        sort(indices.begin(), indices.end());
        vector<int> result;
        for(int idx : indices){
            result.push_back(nums[idx]);
        }
        return result;
    }
};
