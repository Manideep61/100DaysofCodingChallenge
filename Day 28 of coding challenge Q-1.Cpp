class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int n = words.size();
        string firstrow = "qwertyuiop",secondrow = "asdfghjkl",thirdrow = "zxcvbnm";
        map<char,int> temp;
        for(int i=0;i<firstrow.size();i++){
            temp[firstrow[i]] = 1;
        }
        for(int i=0;i<secondrow.size();i++){
            temp[secondrow[i]]=2;
        }
        for(int i=0;i<thirdrow.size();i++){
            temp[thirdrow[i]]=3;
        }
        vector<string> result;
        for(int i =0;i<n;i++){
            string temp1 = words[i];
            char firstChar = temp1[0];  
            char lowerChar = tolower(firstChar);
            int row = temp[lowerChar];   
            bool temp3 = true;
            for (int j = 0; j < temp1.length(); j++) {
                char temp2 = temp1[j];
                char lowertemp2 = tolower(temp2);
                if (temp[lowertemp2] != row) {
                    temp3 = false;
                    break;
                }
            }
            if(temp3==true){
                result.push_back(temp1);
            }
        }
        return result;
    }
};


