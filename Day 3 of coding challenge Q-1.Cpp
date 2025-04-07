class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int z=m+n;
        vector<int> vec(z);
        int x;
        int y;
        int index;
        while(x<m && y<n){
            if(nums1[x]<=nums2[y]){
                vec[index]=nums1[x];
                x++,index++;
            }else{
                vec[index]=nums2[y];
                y++,index++;
            }
        }

    }
};
