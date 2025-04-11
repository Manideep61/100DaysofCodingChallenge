class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> output(n);
        vector<int> temp = score;
        sort(temp.rbegin(),temp.rend());

        map<int,string> par;
        for(int i=0;i<n;i++){
            if(i==0){
                par[temp[i]]="Gold Medal";
            }
            else if(i==1){
                par[temp[i]]="Silver Medal";
            }else if(i==2){
                par[temp[i]]="Bronze Medal";
            }
            else{
                par[temp[i]]=to_string(i+1);
            }

        }
        for(int i=0;i<n;i++){
            output[i]=par[score[i]];
        }
        return output;
    }
};
