class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int>temp;
        vector<string> result;
        int minsum=INT_MAX;
        int n = list1.size();
        for(int i =0;i<n;i++){
            temp[list1[i]]=i;
        }
        int m = list2.size();
        for(int j=0;j<m;j++){
            if(temp.find(list2[j]) != temp.end()){
                int i = temp[list2[j]];
                int sum = i+j;
                if(sum<minsum){
                    result.clear();
                    result.push_back(list2[j]);
                    minsum = sum;
                }else if(sum == minsum){
                    result.push_back(list2[j]);
                }
            }
        }
        return result;
    }
};
