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
    bool sol(TreeNode* root,TreeNode* s){
        if(root==NULL && s==NULL) return true;
        if(root==NULL || s==NULL) return false;
        if(root->val!=s->val) return false;
        return sol(root->left,s->left) && sol(root->right,s->right);

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return false;
        if(root->val==subRoot->val){
            if(sol(root,subRoot)){
                return true;
            }
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};