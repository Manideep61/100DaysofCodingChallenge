class NumArray {
public:
    vector<int> result;
    NumArray(vector<int>& nums) {
        result.resize(nums.size() + 1, 0);
        for(int i = 0; i < nums.size(); i++) {
            result[i + 1] = result[i] + nums[i];
        }
    }
    int sumRange(int left, int right) {
        return(result[right+1]-result[left]);
    }

};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
