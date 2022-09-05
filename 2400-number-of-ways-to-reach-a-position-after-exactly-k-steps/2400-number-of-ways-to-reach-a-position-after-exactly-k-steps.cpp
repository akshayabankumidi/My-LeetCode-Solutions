#define fo(i,a,b) for(int i=a;i<b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define ll long long
#define all(x) x.begin(),x.end()
#define pb push_back
#define sz(x) int(x.size())
#define vi vector<int>
#define vvi vector<vector<int>>
#define ss second
#define ff first
#define mod 1000000007



class Solution {
public:
    
    ll helper(int s,int e,int k,vvi& dp){
        
        if(s==e){
           if(k==0)return 1; 
        }
        if(k<0||s+k<e||s-k>e)return 0;
        if(dp[k][s+1001]!=-1)return dp[k][s+1001];
        ll left=helper(s-1,e,k-1,dp);
        ll right=helper(s+1,e,k-1,dp);
        return dp[k][s+1001]=(left%mod+right%mod)%mod;
    
        
    }
    
    int numberOfWays(int startPos, int endPos, int k) {
        vvi dp(1001,vector<int>(3500,-1));
       return helper(startPos,endPos,k,dp);
        
    }
};