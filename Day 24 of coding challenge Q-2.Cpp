class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> temp;
        int m = nums.size();
        for(int i=0;i<m;i++){
            int m = nums[i];
            temp[m] += 1;
        }
        for (int i =0;i<m;i++){
            if(   temp[nums[i]]>(m/2)){
                return nums[i];
            }
        }
        return 0;
    }
};
