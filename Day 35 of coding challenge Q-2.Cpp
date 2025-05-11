class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = words.size();
        int m = pref.size();
        int count=0;
        string temp = "";
        for(int i=0;i<n;i++){
            temp=words[i].substr(0,m);
            int x=temp.compare(pref);
            if(x==0){
                count++;
            }
        }
        return count;
    }
};
