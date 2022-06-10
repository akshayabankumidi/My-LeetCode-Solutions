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
    bool ans=false;
    void helper(TreeNode *root,int cursum,int targetSum){
    if(root==NULL){return;}
    if(root->left==NULL and root->right==NULL){
        if(cursum+root->val==targetSum)
            ans=true;
       
    }
     helper(root->left,cursum+(root)->val,targetSum);
     helper(root->right,cursum+(root)->val,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        helper(root,0,targetSum);
       return ans;
    }
};