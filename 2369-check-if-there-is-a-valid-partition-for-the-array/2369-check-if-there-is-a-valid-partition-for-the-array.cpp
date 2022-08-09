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
class Solution {
public:
    //4 4 4 4 5 6 
    //4 
    // 4 4
    // 4 4 4 4
    bool validPartition(vector<int>& nums) {
        vector<int>dp(sz(nums));
        dp[0]=0;//false
        if(nums[0]==nums[1])dp[1]=1;
        if(sz(nums)==2)return dp[1];
        if((nums[0]==nums[1] and nums[1]==nums[2])||(nums[1]-nums[0]==1 and nums[2]-nums[1]==1))dp[2]=1;
        // fo(i,0,sz(nums))cout<<dp[i]<<" ";
        if(sz(nums)==3)return dp[2];
       
        fo(i,3,sz(nums)){
            if(nums[i]==nums[i-1] and dp[i-2])dp[i]=1;
            else if(nums[i]==nums[i-1] and nums[i-1]==nums[i-2] and dp[i-3])dp[i]=1;
            else if(nums[i]-nums[i-1]==1 and nums[i-1]-nums[i-2]==1 and dp[i-3]) dp[i]=1;
            }
        fo(i,0,sz(nums))cout<<dp[i]<<" ";
        return dp[sz(nums)-1];
        }
        
    
};