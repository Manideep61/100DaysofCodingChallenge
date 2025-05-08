class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int maxlen = 1;
        int temp = 1;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                temp++;
                maxlen = max(temp,maxlen);
            }else{
                temp = 1;
            }
        }
        return maxlen;
    }
};  
