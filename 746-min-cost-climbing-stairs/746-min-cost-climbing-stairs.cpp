class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(1001);
        int n=cost.size();
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<cost.size();i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
       int ans=min(dp[n-1],dp[n-2]);
        return ans;
    }
};