class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count=0,age=0;
        for(int i=0;i<n;i++){
            int tensplace = details[i][11]-'0';
            int tensplace1= details[i][12]-'0';
            age = (tensplace*10)+tensplace1;
            if(age>60){
                count++;
            }
        }
        return count;
    }
};
