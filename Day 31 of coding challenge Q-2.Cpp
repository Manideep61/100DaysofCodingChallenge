class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        int temp1,temp2;
        map<int,int>temp;
        for(int i=0;i<n;i++){
            temp[i+1]=0;
        }
        for(int i=0;i<n;i++){
            temp[nums[i]] += 1;
        }
        for(int i=0;i<n;i++){
            if(temp[i+1]==2){
                temp1 = i+1;
            }
            if(temp[i+1]==0){
                temp2 = i+1;
            }
        }
        result.push_back(temp1);
        result.push_back(temp2);
        return result;
    }
};
