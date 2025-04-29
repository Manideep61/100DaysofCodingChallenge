class Solution {
public:
    int finddigitsum(int digit){
        int sum = 0;
         while (digit != 0) {
                sum = sum + digit % 10;
                digit = digit / 10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int elementsum =0 , digitsum=0,total=0;
        for(int i=0;i<n;i++){
            elementsum += nums[i];
            digitsum +=  finddigitsum(nums[i]);
           
        }
        total=abs(elementsum-digitsum);
        return total;
    }
};
