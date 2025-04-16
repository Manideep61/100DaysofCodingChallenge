class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        bool m;    
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                if(arr[i]==2*arr[j] && i!=j){
                    m=true;
                    return m;
                }else{
                    m=false;
                }
            }
        }
        return m;
        
    }
};
