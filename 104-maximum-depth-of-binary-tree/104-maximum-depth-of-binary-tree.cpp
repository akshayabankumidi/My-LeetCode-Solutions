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
   
    int  helperL(TreeNode *root){
           if(root==NULL){return 0;}
           if(root->left==NULL and root->right==NULL)return 1;
           int l=helperL(root->left);
           int r=helperL(root->right);
           return 1+max(l,r);
          
        }
    int maxDepth(TreeNode* root) {
      
        return helperL(root);
      
    }
};