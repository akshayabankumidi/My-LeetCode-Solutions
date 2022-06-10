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
    int ans=0;
    void helper(TreeNode *root,int sum){
        if(root==NULL)return;
        if(!root->right and !root->left){
                   ans+=(sum*10)+(root->val);
        }
        helper(root->left,sum*10+(root->val));
        helper(root->right,sum*10+(root->val));
    }
    int sumNumbers(TreeNode* root) {
        helper(root,0);
        return ans;
        
    }
};