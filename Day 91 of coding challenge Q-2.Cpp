class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        int temp1=-1;int result = -1;
        map<int,int> temp;
        for(int i=0;i<n;i++){
            temp[arr[i]]++;
        }
        for(auto& i : temp){
            if(i.first==i.second){
                temp1 = i.first;
                result = max(result,temp1);
            }
        }
        return result;
    }
};
