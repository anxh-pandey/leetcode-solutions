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
    int mxd(TreeNode* root){
        if(root==NULL) return 0;
        int l=mxd(root->left);
        int r=mxd(root->right);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int l=mxd(root->left);
        int r=mxd(root->right);
        return max({diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right),l+r});
    }
};