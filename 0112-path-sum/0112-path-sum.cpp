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
    bool sol(TreeNode* root,int k,int sum){
        if(root==NULL) return false;
        sum+=root->val;
        if(root->left==NULL && root->right==NULL){
            if(sum==k){
                return true;
            }
            return false;
        }
        return sol(root->left,k,sum) || sol(root->right,k,sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return sol(root,targetSum,0);
    }
};