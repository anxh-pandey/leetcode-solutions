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
    bool asol(TreeNode* root,TreeNode* s){
        if(root==NULL && s==NULL) return true;
        if(root==NULL || s==NULL) return false;
        if(root->val!=s->val) return false;
        return asol(root->left,s->left) && asol(root->right,s->right);

    }
    bool sol(TreeNode* root,TreeNode* s){
        if(root==NULL) return false;
        if(root->val==s->val){
            if(asol(root,s)){
                return true;
            }
        }
        return sol(root->left,s) || sol(root->right,s);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return sol(root,subRoot);
    }
};