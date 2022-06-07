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
    vector<int>a,b;
     //int flag=1;
    void helper(TreeNode *p){
        if(p==NULL){a.push_back(INT_MIN);return;}
        helper(p->left);
        helper(p->right);
        a.push_back(p->val);
        
    }
        void helper2(TreeNode *q){
        if(q==NULL){b.push_back(INT_MIN); return;}
        helper2(q->left);
        helper2(q->right);
           // cout<<q->val<<" ";
        b.push_back(q->val);
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        helper(p);
        helper2(q);
        for(auto y:a)cout<<y<<" ";cout<<"\n";
        for(auto x:b)cout<<x<<" ";
        if(a.size()!=b.size())return false;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])return false;
        }
        return true;
        
        
    }
};