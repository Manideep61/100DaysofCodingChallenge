class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        sort(candyType.begin(), candyType.end());
        auto it = unique(candyType.begin(), candyType.end());
        candyType.erase(it, candyType.end());
        int result=0;
        int m = candyType.size();
        int temp = n/2;
        if(temp>=m){
            result = m;
        }else{
            result = temp;
        }
        return result;
    }
};
