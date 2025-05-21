class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<int,int>mat;
        int n =26;
        for(int i=0;i<n;i++){
            int m = i+97;
            mat[m]=0;
        }
        int x = sentence.size();
        for(int i=0;i<x;i++){
            char temp = sentence[i];
            int y = temp;
            mat[y]+=1;
        }

        for(auto i:mat){
            cout<<i.first<< " "<<i.second<<endl;
            if(i.second==0){
                return false;
            }
        }
        return true;
    }
};
