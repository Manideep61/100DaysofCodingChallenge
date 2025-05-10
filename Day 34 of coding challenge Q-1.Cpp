class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int n = nums1.size();
        int m = nums2.size();
        int o = nums3.size();
        vector<int>output;
        map<int,int>max;
        map<int,int>m1;
        map<int,int>m2;
        for(int i =0;i<n;i++){
            if(max[nums1[i]]<1){
                max[nums1[i]]++;
            }
        }
        for(int i = 0;i<m;i++){
            if(m1[nums2[i]]<1){
                m1[nums2[i]]++;
            }
        }
        for(int i = 0;i<o;i++){
            if(m2[nums3[i]]<1){
                m2[nums3[i]]++;
            }
        }
        for(auto i:m1){
            int inp = i.first;
            max[inp]+=1;
        }
        for(auto i:m2){
            int inp = i.first;
            max[inp]+=1;
        }
        for(auto i:max){
            if(i.second>=2){
                output.push_back(i.first);
            }
        }
        return output;
    }
};
