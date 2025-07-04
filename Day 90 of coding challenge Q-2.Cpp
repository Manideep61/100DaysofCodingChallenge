class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        long long length = 1;
        vector<long long> prefixLengths;
        int totalShift = 0;
        for (int op : operations) {
            length *= 2;
            prefixLengths.push_back(length);
            if (length >= k) break;
        }
        for (int i = prefixLengths.size() - 1; i >= 0; --i) {
            long long half = prefixLengths[i] / 2;
            if(k > half){
                k -= half;
                if(operations[i] == 1){
                    totalShift++;
                }
            }
        }
        return static_cast<char>((totalShift % 26) + 'a');
    }
};
