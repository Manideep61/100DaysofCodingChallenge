class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        string manideep="";
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                string mani = word.substr(0,i+1);
                reverse(mani.begin(), mani.end()); 
                string deep = word.substr(i+1,n-i-1);
                manideep=mani+deep;
                cout<<manideep<<endl;
                break;

            }
            
        }
        int m=manideep.size();
        if(m==0){
            manideep=word;
        }
        return manideep;
    }
};
