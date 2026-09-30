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
    vector<int> sol(TreeNode* root,vector<int>& a){
        if(root==NULL) return {};
        a.push_back(root->val);
        sol(root->left,a);
        sol(root->right,a);
        return a;
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> a;
        sol(root,a);
        sort(a.begin(),a.end());
        return a[k-1];
    }
};