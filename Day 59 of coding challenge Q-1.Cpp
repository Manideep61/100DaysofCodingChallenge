class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=nums[i]+nums[j];
                if(i<j && x<target){
                    count++;
                }
            }
        }
        return count;
    }
};
