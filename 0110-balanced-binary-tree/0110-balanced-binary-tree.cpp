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
    int maxdepth(TreeNode* root){
        if(root==NULL) return 0;
        int l=maxdepth(root->left);
        int r=maxdepth(root->right);
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
     if(root==NULL) return true;
     int a=maxdepth(root->left);
     int b=maxdepth(root->right);
     if(!isBalanced(root->left) || !isBalanced(root->right)) return false;
     if(abs(a-b)>1) return false;
     return true;   
    }
};