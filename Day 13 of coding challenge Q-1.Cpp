class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int count=0,result=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    count=(nums[i]-1)*(nums[j]-1);
                }
                if(result<count){
                    result=count;
                }
            }
        }
        return result;
    }
};
