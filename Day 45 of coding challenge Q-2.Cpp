class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> temp;
        string result= "";
        int n = arr.size();
        for(int i=0;i<n;i++){
            temp[arr[i]]+=1;
        }
        int count=0;
        for(int i =0;i<n;i++){
            if(temp[arr[i]]==1){
                count++;
                if(count == k){
                    result = arr[i];
                    break;
                }
            }
        }
        return result;
    }
};
