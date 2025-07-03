class Solution {
public:
    char kthCharacter(int k) {
        return getChar(k);
    }
    private:
    char getChar(int k){
        if(k==1) return 'a';
        int len = 1 , total = 1;
        while(total<k){
            len = total;
            total = total * 2;
        }
        if(k <= len){
            return getChar(k);
        }else{
            char ch = getChar(k - len);
            return (ch == 'z') ? 'a' : ch + 1;
        }
    }
};
