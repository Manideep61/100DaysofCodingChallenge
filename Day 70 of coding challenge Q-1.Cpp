class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int temp = -1;
        for(int i = n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                temp = i;
                break;
            }
        }
        if(temp != -1){
            int nextGreater = -1;
            for(int i=n-1;i>temp;i--){
                if(nums[i]> nums[temp]){
                    nextGreater = i;
                    break;
                }
            }
            int x= nums[temp];
            nums[temp] = nums[nextGreater];
            nums[nextGreater] = x;
            reverse(nums.begin()+temp+1,nums.end());
        }else{
            reverse(nums.begin(),nums.end());
        }
    }
};
