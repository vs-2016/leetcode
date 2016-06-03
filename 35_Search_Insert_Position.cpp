class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        size_t left=0,right=nums.size();
        for(auto mid=(left+right)/2;left<right;mid=(left+right)/2){
            if(target==nums[mid])return mid;
            else if(target<nums[mid]) right=mid;
            else left=mid+1;
        }
        return left;
    }
};