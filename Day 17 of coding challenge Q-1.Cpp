class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        for(int i =0;i<n;i++){
            int m = nums[i];
            ans[i]=nums[m];
        }
        return ans;
    }
};
