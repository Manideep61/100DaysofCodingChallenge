class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        for(int i = n-1;i>=0;i--){
            char x = num[i];
            int y = x - 48;
            if(y%2 == 1){
                break;
            }else{
                num.pop_back();
            }
        }
        return num;
    }
};
