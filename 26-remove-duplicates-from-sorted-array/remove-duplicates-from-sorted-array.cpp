class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int filler=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]!=nums[i])
            {
                nums[filler]=nums[i];
                filler++;
            }
        }
        return filler;
    }
};