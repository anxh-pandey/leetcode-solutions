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
    int maxDepth(TreeNode* root){
        if(root==NULL) return 0;
        int a=maxDepth(root->left);
        int b=maxDepth(root->right);
        return 1+max(a,b);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int a=maxDepth(root->left);
        int b=maxDepth(root->right);
        if(!isBalanced(root->left) || !isBalanced(root->right)) return false;
        if(abs(a-b)>1) return false;
        return true;
    }
};