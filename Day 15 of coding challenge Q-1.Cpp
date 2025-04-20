class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n = word1.size();
        int m = word2.size();
        bool result= false;
        string temp1="",temp2="";
        for(int i=0;i<n;i++){
            temp1+=word1[i];
        }
        for(int i=0;i<m;i++){
            temp2+=word2[i];
        }
        int x = temp1.compare(temp2);
        if(x==0){
            return true;
        }else{
            return false;
        }
        return result;
    }
};
