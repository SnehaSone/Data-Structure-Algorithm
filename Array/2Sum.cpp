class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) {
            int rem = target - nums[i];
            if(mp.find(rem) != mp.end()) {
                return {i, mp[rem]};
            }
            mp[nums[i]] = i;
        }
        return {-1};
    }
};