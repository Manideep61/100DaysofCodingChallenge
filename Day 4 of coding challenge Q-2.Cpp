class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n= nums.size();
        map<int,bool> temp;
        for (int i = 1; i <= n; i++) {
            temp[i] = false;
        }
        for(int i=0;i<n;i++){
            temp[nums[i]]=true;
        }
        vector<int> result;
        for(int i=1;i<n+1;i++){
            if(temp[i]==false){
                result.push_back(i);
            }
        }
        return result;
    }
};
