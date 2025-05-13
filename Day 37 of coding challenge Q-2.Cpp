class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i=0, j = n-1;
        while(i<j){
            int m = s[i];
            int k = s[j];
            while(i<j && !(48<=m && m<=57 || 65<=m && m<=90 || 97<=m && m<=122)){
                i++;
                m = s[i];
            }
            while(i<j && !(48<=k && k<=57 || 65<=k && k<=90 || 97<=k && k<=122)){
                j--;
                k = s[j];
            }
            if(char(tolower(s[i]))!=char(tolower(s[j]))){
                return false;
            }
            i++; j--;

        }
        return true;
        
    }
};
//accb
