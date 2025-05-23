class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        char mani='.';
        string deep="[.]";
        string result="";
        for(int i=0;i<n;i++){
            if(address[i]==mani){
                result=result+deep;
            }else{
                result= result+address[i];
            }
        }

        return result;
    }
};


