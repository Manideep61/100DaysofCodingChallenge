class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> temp;
        vector<int> result;
        for(int i=0;i<n;i++){
            temp[nums[i]]++;
        }
        for(auto& i : temp){
            if(i.second>(n/3)){
                result.push_back(i.first);
            }
        }
        return result;
    }
};
