class Solution {
public:
    string reverseWords(string s) {
        stack<char>stk;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                while(!stk.empty()){
                    ans+=stk.top();
                    stk.pop();
                }
                ans+=" ";
            }
            else stk.push(s[i]);
        }
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        return ans;
        
    }
};