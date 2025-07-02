class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int n = arr.size();
        vector<int> prevLess(n), nextLess(n);
        stack<int> st;
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            prevLess[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while (!st.empty()) st.pop();
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            nextLess[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        long long res = 0;
        for (int i = 0; i < n; ++i) {
            long long count = (long long)(i - prevLess[i]) * (nextLess[i] - i) % MOD;
            res = (res + count * arr[i]) % MOD;
        }
        return res;
    }
};
