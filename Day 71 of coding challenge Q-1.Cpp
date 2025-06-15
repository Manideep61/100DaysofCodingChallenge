class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 0,temp =1;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n == 0) return 0;
        for(int i=0;i<n-1;i++){
            if(  nums[i] == (nums[i+1]-1)){
                temp++;
            }else if(nums[i] == nums[i+1]){
                continue;
            }else{
                result = max(result,temp);
                temp=1;
            }
        }
        result = max(result,temp);
        return result;
    }
};
