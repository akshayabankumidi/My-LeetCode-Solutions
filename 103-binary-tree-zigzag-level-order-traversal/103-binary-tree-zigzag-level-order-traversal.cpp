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
        map<int,vector<int>>a;
    void helper(TreeNode* root,int d){
        if(root==NULL){return;}
       
      a[d].push_back(root->val);
        helper(root->left,d+1);
        helper(root->right,d+1);
          
       
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
          vector<vector<int>>b;
        helper(root,0);
        for(auto x:a){
            vector<int>r;
            for(auto y:x.second){
               r.push_back(y);
            }
           if(x.first%2!=0)reverse(r.begin(),r.end());
           
            b.push_back(r);
        }
        return b;
    }
};