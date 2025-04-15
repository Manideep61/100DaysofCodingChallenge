class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int result=0,count=0;
        for(int i=0;i<n;i++){
            for(int j =i+1;j<n;j++){
               
                    if(count<arr[j]){
                        count=arr[j];
                       
                        arr[i]=count;
                    }
                
            }
            
            count=0;
        }
        arr[n-1]=-1;
        return arr;
        
    }
};
