class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp,mp2;
        for(int i=0;i<s.size();i++)mp[s[i]]++;
        string ans="",s2="";
        for(auto x: order){mp2[x]++;
            if(mp[x]){
               for(int i=0;i<mp[x];i++){
                   ans+=x;
               } 
            }
            
        }
        for(auto x:s){
            if(mp2[x]==0)ans+=x;
        }
      
        return ans;
    }
};