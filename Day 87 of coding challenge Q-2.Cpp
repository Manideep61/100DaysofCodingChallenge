class Solution {
public:
    int possibleStringCount(string word) {
        int result = 1;
        int n = word.size();
        for(int i=0;i<n;){
            int j = i;
            while(j<n && word[j] == word[i]){
                j++;
            }
            int len = j-i;
            if(len >=2 ){
                result += len - 1;
            }
            i=j;
        }
        return result;
    }
};
