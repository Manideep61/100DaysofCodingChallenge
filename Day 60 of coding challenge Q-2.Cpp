class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        int m = nums2.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x = nums2[j]*k;
                if(nums1[i]%x==0){
                    count++;
                }

            }
        }
        return count;
    }
};
