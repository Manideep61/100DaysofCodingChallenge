class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int temp=0,result=0;
        for(int i=0;i<n;i++){
            if(nums[i]>temp){
                temp = nums[i];
                result = i;
            }
        }
        for(int i=0;i<n;i++){
            if(i!= result && temp < nums[i]*2){
                return -1;
            }
        }
        return result;
    }
};
