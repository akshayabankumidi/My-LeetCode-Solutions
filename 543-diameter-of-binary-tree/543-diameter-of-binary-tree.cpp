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
     int  helperL(TreeNode *root){
          if(root==NULL){return 0;}
           int left=helperL(root->left);
           int right=helperL(root->right);
          ans=max(ans,(right+left));
        
         return 1+max(left,right);
          
        }
  
    int diameterOfBinaryTree(TreeNode* root) {
         helperL(root);
        return ans;
      
    }
};