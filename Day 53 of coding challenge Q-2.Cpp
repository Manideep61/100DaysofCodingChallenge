class Solution {
public:
    void key(int i,vector<int>& temp ,vector<vector<int>>& rooms){
        int m = rooms[i].size();
        temp[i]=1;
        for(int j=0;j<m;j++){
            int r = rooms[i][j];
            if(temp[r]==0){
                key(r,temp,rooms);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int>temp(n,0);
        bool result = true;
        int i =0;
        key(i,temp,rooms);
        for(int i =0;i<n;i++){
            if(temp[i]==0){
                return false;
            }else{
                result = true;
            }
        }
        return result;
    }
};
