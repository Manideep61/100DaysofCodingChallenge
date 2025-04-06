class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int result = 0;
        for(int i=0;i<n;i++){
            if(target==nums[i]){
                result=i;
                return result;
            }else if(target<nums[i]){
                result =i;
                return result;
            }else{
                result = n;
            }
        }
        return result;
    }
};
