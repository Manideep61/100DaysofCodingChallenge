class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.size();
        int count=0;
        string mani="";
        for(int i=0;i<n;i++){
           if(s[i]==' '){
            count++;
            while(i<n && s[i]==' '){
                i++;
            }
            i--;
           }
           if(count<k){
            mani=mani+s[i];
           }

        }
        return mani;
    }
};
