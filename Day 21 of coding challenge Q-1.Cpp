class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int count=1,result=0;
        for(int i=0;i<n;i++){
            int m=sentences[i].size();
            for(int j=0;j<m;j++){

                if(sentences[i][j]==' '){
                    count++;
                }
                if(result<=count){
                    result=count;
                }
            }
            count=1;
        }
        return result;
    }
};
