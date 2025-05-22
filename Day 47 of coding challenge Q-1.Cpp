class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int n = words1.size();
        map<string,int> temp;
        int result = 0;
        for(int i=0;i<n;i++){
            temp[words1[i]]+=1;
            if(temp[words1[i]]>=2){
                temp[words1[i]]=INT_MIN;
            }
        }
        int m = words2.size();
        for(int j=0;j<m;j++){
            if(temp[words2[j]]>INT_MIN){
                temp[words2[j]] -= 1;
            }
        }
        for(int i=0;i<n;i++){
            if(temp[words1[i]]==0){
                result++;
            }
        }
        return result;
    }
};
