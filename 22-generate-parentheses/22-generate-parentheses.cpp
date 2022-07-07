class Solution {
public:
    
    void helper(int open,int close,string path,vector<string>&ans){
        if(open==0 and close==0){
            ans.push_back(path);
            return;
    }
        if(open!=0){
            helper(open-1,close,path+'(',ans);
    }
        if(open<close)
            helper(open,close-1,path+')',ans);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(n,n,"",ans);
        return ans;
    }
};