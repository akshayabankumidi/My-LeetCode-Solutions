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
    int flag=1;
    int helper(TreeNode* root){
        if(root==NULL)return 0;
        if(root->left==NULL and root->right==NULL)return 1;
        int left=helper(root->left);
        int right=helper(root->right);
        if(abs(left-right)>1){flag=0;}
        return 1+max(left,right);
        
    }
    bool isBalanced(TreeNode* root) {
        helper(root);
        return flag;
    }
};