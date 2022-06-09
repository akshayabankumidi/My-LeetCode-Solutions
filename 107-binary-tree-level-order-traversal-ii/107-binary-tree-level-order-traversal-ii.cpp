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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        vector<int>b;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode *x=q.front();
            q.pop();
            if(x==NULL){
                 ans.push_back(b);
                if(q.empty()) break;
               // ans.push_back(b);
                q.push(NULL);
                 b.clear();
            }
            else{
                b.push_back(x->val);
            if(x->left){
                q.push(x->left);
            }
            if(x->right){
                q.push(x->right);
            }
            }
        }///ans.push_back(b);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};