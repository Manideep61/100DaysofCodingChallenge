class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>output;
        map<char,int>max;
        int n = words.size();
        for(int i=0;i<n;i++){
            int m = words[i].size();
            map<char,int>max1;
            for(int j=0;j<m;j++){
                if(i==0){
                    max[words[i][j]]++;
                }
                max1[words[i][j]]++;
            }
            for(auto i:max){
                char x = i.first;
                int y = i.second;
                max[x] = min(max[x],max1[x]);
                cout<<"mani"<<endl;
            }
        }
        for(auto i:max){
            cout<<i.first<<" "<<i.second<<endl;
        }
        for(auto i :max){
            int n = i.second+1;
            for(int j=1;j<n;j++){
                char m = i.first; 
                string x = "";
                x += m;
                output.push_back(x);
            }
        } 
        return output;       
    }
};


