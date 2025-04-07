class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0],result=0,profit=0;
        for(int i = 0;i<n;i++){
            int sell = prices[i];
            profit = sell-mini;
            result = max(result,profit);
            mini = min(mini,sell);
        }

        return result;
    }
};
