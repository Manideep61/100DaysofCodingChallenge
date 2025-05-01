class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> temp;
        int n = nums.size();
        for(int i =0;i<n+1;i++){
            temp[i]=0;
        }
        for(int i=0;i<n;i++){
            temp[nums[i]]=1;
        }
        for(int i=0;i<n+1;i++){
            if(temp[i]==0){
                return i;
            }
        }
        return 0;
    }
};
