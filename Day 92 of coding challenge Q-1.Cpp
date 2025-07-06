class FindSumPairs {
    vector<int> nums1,nums2;
    unordered_map<int,int> freq2;
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        for (int num : nums2) {
            freq2[num]++;
        }
    }
    
    void add(int index, int val) {
        freq2[nums2[index]]--;
        if (freq2[nums2[index]] == 0) {
            if (freq2[nums2[index]] == 0) {}
        }
        nums2[index] += val;
        freq2[nums2[index]]++;
    }
    
    int count(int tot) {
        int result = 0;
        for (int n1 : nums1){
            int target = tot - n1;
            if(freq2.count(target)){
                result += freq2[target];
            }
        }
        return result;
        
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
