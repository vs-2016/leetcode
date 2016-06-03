int findDuplicate(int* nums, int numsSize) {
    int r,slow,fast;
    for(slow=nums[0],fast=nums[nums[0]];slow!=fast;slow=nums[slow],fast=nums[nums[fast]]);
    for(r=0;r!=slow;slow=nums[slow],r=nums[r]);
    return r;
}