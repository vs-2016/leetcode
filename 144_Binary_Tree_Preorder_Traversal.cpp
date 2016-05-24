/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> r;
        stack<TreeNode*> s;
        for(auto p=root;p || !s.empty();){
            for(;p;p=p->left){
                r.push_back(p->val);
                s.push(p);
            }
            p=s.top();
            s.pop();
            p=p->right;
        }
        return r;
    }
};