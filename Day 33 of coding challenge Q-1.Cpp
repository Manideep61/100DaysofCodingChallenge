class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        bool result = false;
        for(int i =0;i<n;){
            if(i == n-1){
                result = true;
                break;
            }
            if(bits[i]==1){
                i+=2;
            }else{
                i+=1;
            }
        }
        return result;
    }
};
