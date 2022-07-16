class Solution {
public:// "tmmruwt"
   
    int lengthOfLongestSubstring(string s) {
      int ans=0;
        map<char,int>mp;
        int p=0,i;
        for(i=0;i<s.size();i++){
            while(mp[s[p]]!=1 and p<s.size()){
             
               mp[s[p]]=1;p++;
                
            }mp[s[i]]-=1;
            ans=max(ans,p-i);
        }return ans;
    }
};