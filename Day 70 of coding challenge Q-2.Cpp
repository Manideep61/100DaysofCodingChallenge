class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp1;
        vector<int> temp2;
        vector<int> result;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                temp1.push_back(nums[i]);
            }else{
                temp2.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++){
            result.push_back(temp2[i]);
            result.push_back(temp1[i]);
        }
        return result;
    }
};
