class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        map<int,int>arr ;
        for(int i=0;i<n;i++){
            arr[nums[i]] = arr[nums[i]]+1;
        }
        for(auto i:arr){
           if(i.second==1){
             sum+=i.first;
           }
        }
        return sum;
    }
};
