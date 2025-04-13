class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string>sta;
        int count = 0;
        int n = operations.size();
        for(int i=0;i<n;i++){
            cout<<i<<endl;
            if(operations[i].compare("+")==0){
                int m =stoi(sta.top());
                sta.pop();
                int y =stoi(sta.top());
                string mani = to_string(m);
                sta.push(mani);
                int x = m+y;
                string q = to_string(x);
                sta.push(q);

            }else if(operations[i].compare("C")==0){
                sta.pop();
            }else if(operations[i].compare("D")==0){
                int m = stoi(sta.top());
                m = m*2;
                string w = to_string(m);
                sta.push(w);
            }else {
                sta.push(operations[i]);
            }
            cout<<sta.size()<<endl;
        }
        while(!sta.empty()){
            int x = stoi(sta.top());
            sta.pop();
            count += x ;
        }
        return count;
    }
};
