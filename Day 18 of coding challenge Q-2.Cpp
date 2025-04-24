class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>vect;
        vector<int>v1;
        vector<int>v2;
        map<int,int>m;
        int n =nums1.size();
        int x =nums2.size();
        for(int i=0;i<n;i++){
            m[nums1[i][0]]  = nums1[i][1];
        }
        for(int i =0;i<x;i++){   
            m[nums2[i][0]] = m[nums2[i][0]] + nums2[i][1];
        }
        for(auto i:m){
            v1.push_back(i.first);
            v1.push_back(i.second);
            vect.push_back(v1);
            v1.clear();
        }
        return vect;
    }
};


