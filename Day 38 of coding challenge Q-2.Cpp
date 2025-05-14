class Solution {
public:
    string capitalizeTitle(string title) {
        int n=title.size();
        for(int i=0;i<n;i++){
            title[i]=char(tolower(title[i]));
        }
        string word="";
        string result = "";
        for(int i=0;i<n;i++){
           if(title[i]!=' '){
              word = word + title[i];
           }
           else if(title[i]==' '){
                int m=word.size();
                if (m>2){
                    word[0]=char(toupper(word[0]));
                }
                result=result+word+' ';
                word="";

           }

        }
        int m=word.size();
        if (m>2){
                word[0]=char(toupper(word[0]));
            }
         result=result+word;

        return result;
    }
};
