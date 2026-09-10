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
    int sm(TreeNode* root){
        if(root==NULL) return 0;
        int r=sm(root->right);
        int l=sm(root->left);
        return root->val+l+r;
    }
    int nn(TreeNode* root){
        if(root==NULL) return 0;
        int r=nn(root->right);
        int l=nn(root->left);
        return 1+r+l;
    }
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL) return 0;
        int s=sm(root);
        int n=nn(root);
        int ans=0;
        if(n!=0){
            if(s/n==root->val){
                ans+=1;
            }
        }
        ans+=averageOfSubtree(root->left);
        ans+=averageOfSubtree(root->right);
        return ans;
    }
};