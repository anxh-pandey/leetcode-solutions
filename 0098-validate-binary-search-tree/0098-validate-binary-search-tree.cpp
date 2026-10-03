/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool sol(TreeNode* root,long long l,long long h){
        if(root==NULL) return true;
        if(root->val<=l || root->val>=h){
            return false;
        }
        return sol(root->left,l,root->val) && sol(root->right,root->val,h);
    }
    bool isValidBST(TreeNode* root) {
        return sol(root,LLONG_MIN,LLONG_MAX);
    }
};