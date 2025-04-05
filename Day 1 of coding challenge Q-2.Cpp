class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n =nums.size();
        int i =0, j=0,count=1;
        while(j<n){
            if(nums[i]==nums[j]){
                cout<<"in the if condition: "<<j<<endl;
                j++;
            }else{
                cout<<i<<endl;
                i++;
                nums[i] = nums[j];
                count++;
            }
        }
       return count;
    }
};
