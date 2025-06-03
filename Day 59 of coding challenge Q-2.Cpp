class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>m;
        //i=0
        for(int i=0;i<n;i++){
            int sum=0;
            vector<int>x;
            while(nums[i]!=0){
                sum=nums[i]%10;
                x.push_back(sum);
                nums[i]=nums[i]/10;
            }
            reverse(x.begin(), x.end());
            m.insert(m.end(),x.begin(),x.end());
        }
        return m;
    }
};
