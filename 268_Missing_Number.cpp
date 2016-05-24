class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int r=0,i;
        for(i=0;i<nums.size();i++)r^=(i^nums[i]);
        return r^i;
    }
};