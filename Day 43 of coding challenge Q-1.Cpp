class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> temp;
        int n = s.size();
        bool outcome = false;
        int count=0;
        for(int i =0;i<n;i++){
            temp[s[i]]++;
        }
        for(auto i:temp){
            int m = i.second;
            if(m%2==0){
                count+=m;
            }
            if(m%2==1){
                m=m-1;  
                count+=m;
                outcome=true;
            }
        }
        if(outcome==true){
            count+=1;
        }
        return count;
    }
};
