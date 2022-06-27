class Solution {
public:
    int countSubstrings(string s) {
      int n=s.size();
      vector<vector<int>>dp(n , vector<int> (n));
        int cnt=n;
        for(int i=0;i<n;i++){
            dp[i][i]=1;
           if(i<n-1 && s[i]==s[i+1]){dp[i][i+1]=1;cnt++;}
       }
    
        
        for(int i=2;i<n;i++){
            int r=0,c=i;
            while(r<n and c<n){
                if(s[r]==s[c]){
                    dp[r][c]=dp[r+1][c-1];
                   if(dp[r][c])cnt++; 
                }
                r++;c++;
            }
          
        }
        //       for(auto x:dp){
        //    for(auto y:x)
        //        cout<<y<<" ";
        //     cout<<"\n";
        // }
        return cnt;
        
    }
};