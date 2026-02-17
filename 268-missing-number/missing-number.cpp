class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int allXOR=0;
        int n=nums.size();

        for(int i=0;i<=n;i++){
            allXOR=allXOR^i;
        }

        for(int nums:nums){
            allXOR=allXOR^nums;
        }

        return allXOR;
        
    }
};