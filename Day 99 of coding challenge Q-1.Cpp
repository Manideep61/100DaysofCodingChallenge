class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> current;
        sort(nums.begin(), nums.end());
        backtrack(0, nums, current, res);
        return res;
    }
    void backtrack(int start, vector<int>& nums, vector<int>& current, vector<vector<int>>& res){
        res.push_back(current);
        for(int i = start; i< nums.size(); i++){
            if(i>start && nums[i] == nums[i-1]) continue;
            current.push_back(nums[i]);
            backtrack (i+1,nums,current,res);
            current.pop_back();
        }
    }
};
