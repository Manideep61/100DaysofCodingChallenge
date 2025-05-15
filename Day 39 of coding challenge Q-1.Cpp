class Solution {
public:
    int getLucky(string s, int k) {
        int n = s.size();
        string numstr = "";
        for(int i =0;i<n;i++){
            char temp = s[i];
            int x = temp;
            x = x-96;
            numstr += to_string(x);
        }
       while(k!=0){
            int sum=0;
            int m = numstr.size();
            for(int i=0;i<m;i++){
                char temp = numstr[i];
                sum += temp-'0';
            }
            numstr = to_string(sum);
            k--;
       }
        return stoi(numstr);
    }
};
