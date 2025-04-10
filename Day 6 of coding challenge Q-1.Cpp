class Solution {  //nums = [1,1,0,1,1,1,0]
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n=nums.size();
        int result=0,count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }else{
                if(result<=count){
                    result=count;
                    
                }
                count = 0;
            }
        }
        if(result<=count){
            result=count;
        }
    return result;
    }

};
