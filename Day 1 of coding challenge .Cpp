class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>index;
        int n = nums.size();
        map<int,int>m;
        for(int i=0;i<n;i++){
          m[nums[i]] = i+1;
        }
        for(int i=0;i<n;i++){
…                    return index;                   
                }
            }
        }
        return index;
    }
};
