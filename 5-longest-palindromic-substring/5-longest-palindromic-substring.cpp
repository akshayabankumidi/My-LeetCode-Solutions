#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define all(x) (x).begin(), (x).end()
class Solution {
public:
    string longestPalindrome(string s) {
        
           
  int n=s.size();
        if(n==1)return s;
      vector<vector<int>>dp(n , vector<int> (n));
        int cnt=1;
        for(int i=0;i<n;i++){
            dp[i][i]=1;
           if(i<n-1 && s[i]==s[i+1]){dp[i][i+1]=1;}
       }
    
        
        for(int i=2;i<n;i++){
            int r=0,c=i;
            while(r<n and c<n){
                if(s[r]==s[c]){
                    dp[r][c]=dp[r+1][c-1];
                  
                }
                r++;c++;
            }
          
        }
        int start,end,p,q,ans=1;
             for(int i=0;i<n;i++){
                 start=i,end=i;
        
           for(int j=i;j<n;j++)
           {
               
               if(dp[i][j]==1){
                   end=j;
               }
           }
                 if(end-start+1>ans){
                     ans=end-start+1;
                     p=start,q=end;
                 }
            
        }
        
      string temp=s.substr(p,ans);
        return temp;
        
        
        
}
};