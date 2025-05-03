class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int n = nums.size();
        int result;
        if(n<3){
            result=nums[n-1];
        }else{
            result=nums[n-3];
        }
        return result;
    }
};
