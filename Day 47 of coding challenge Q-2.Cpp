class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while(columnNumber>0){
            columnNumber--;
            char ch = 'A' + (columnNumber % 26);
            result += ch;
            columnNumber/=26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
