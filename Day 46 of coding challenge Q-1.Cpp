class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int n = word1.size();
        map<char,int> temp;
        for(int i=0;i<n;i++){
            temp[word1[i]]+=1;
        }
        for(int j =0;j<n;j++){
            temp[word2[j]]-=1;
        }
        for(int i=0;i<n;i++){
            if(temp[word1[i]]>3 || temp[word1[i]]<-3 || temp[word2[i]]>3 || temp[word2[i]]<-3){
                return false;
            }
        }
        return true;
    }
};
