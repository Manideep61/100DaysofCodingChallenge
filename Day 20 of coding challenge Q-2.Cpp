class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int>answer;
        answer.insert(answer.end(),prices.begin(),prices.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(answer[j] <= answer[i]){
                    answer[i]=answer[i]-answer[j];
                    break;
                }
            }
        }
        return answer;
    }
};
