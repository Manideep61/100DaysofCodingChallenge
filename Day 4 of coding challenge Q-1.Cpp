class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int>repeat;
        bool output = true;
        for(int i =0;i<n;i++){
            repeat[nums[i]]++;
        }
        for(auto i:repeat){
            if(i.second==1){
                output = false;
            }else if(i.second>1){
                return true;
            }
        }
        return output;
    }
};
