class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> temp;
        int result=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            temp[nums[i]]+=1;
        }
        for(auto i : temp){
            if(temp.find(i.first+1)!= temp.end()){
                int temp2 = i.second + temp[i.first+1];
                result = max(result,temp2);
            }
        }
        return result;
    }
};
