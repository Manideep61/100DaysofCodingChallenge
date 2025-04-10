class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int , int> temp;
        stack<int>st;
        int n= nums2.size();
        int m = nums1.size();
        for (int i=0;i<n;i++) {
            while (!st.empty() && st.top() < nums2[i]) {
                temp[st.top()] = nums2[i]; 
                st.pop();
            }
            st.push(nums2[i]);
        }
        while (!st.empty()){
            temp[st.top()]=-1;
            st.pop();
        }
        vector<int> result;
        for(int i=0;i<m;i++){
            result.push_back(temp[nums1[i]]);
        }
        return result;
    }
};
