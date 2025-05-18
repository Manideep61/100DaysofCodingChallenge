class Solution {
public:
    string interpret(string command) {
        int n=command.size();
        string mani="";
        for(int i=0;i<n;i++){
            if(command[i]=='G'){
                mani=mani+'G';
            }else if(command[i]=='('&&command[i+1]==')'){
                mani=mani+'o';
            }else if(command[i]=='('&&command[i+1]=='a'){
                mani=mani+"al";
            }
        }
        return mani;
    }
};
