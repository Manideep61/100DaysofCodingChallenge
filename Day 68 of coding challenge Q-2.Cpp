class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int result = true, temp =0;
        for(int i =0 ;i<n;i++){
            if(nums[i] > nums[(i + 1) % n] && temp < 1){
                temp++;
            }else if (nums[i] > nums[(i + 1) % n] && temp == 1){
                result = false;
                break;
            }
        }
        return result;
    }
};
