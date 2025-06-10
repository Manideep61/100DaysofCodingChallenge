class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n =word1.size();
        int m = word2.size();
        string mani="";
        for( int i=0;i<min(m,n);i++){
            
            mani=mani+word1[i]+word2[i];
            
        } 
       
        if(n>m){
            for(int i=m;i<n;i++){
                mani=mani+word1[i];
            }
        }
        if(m>n){
            for(int j=n;j<m;j++){
                mani=mani+word2[j];
            }
        }
        return mani;
    }
};
