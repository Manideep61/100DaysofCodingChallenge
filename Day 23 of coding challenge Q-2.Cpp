class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            int l = words[i].length();
            for(int j=0;j<l;j++){
                if(words[i][j]==x){
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};
