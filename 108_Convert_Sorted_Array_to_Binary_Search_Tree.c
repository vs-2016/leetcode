/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if(!nums || numsSize<1)return NULL;
    struct TreeNode *p=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    int mid=(numsSize-1)/2;
    p->val=nums[mid];
    p->left=sortedArrayToBST(nums,mid);
    p->right=sortedArrayToBST(nums+mid+1,numsSize-mid-1);
    return p;
}