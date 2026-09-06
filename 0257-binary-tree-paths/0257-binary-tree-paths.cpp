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
    void sol(TreeNode* root,string a,vector<string>& ans){
        if(root==NULL) return;
        a+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            ans.push_back(a);
            return;
        }
        a+="->";
        sol(root->left,a,ans);
        sol(root->right,a,ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        sol(root,"",ans);
        return ans;
    }
};