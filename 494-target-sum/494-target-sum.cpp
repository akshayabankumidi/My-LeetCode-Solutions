
#define ll int
class Solution {
public:
    ll flag=0;
void helper(ll n,vector<ll>&a,ll tsum,ll sum,ll i){
 if(i==n){
  if(sum==tsum){
    flag++;
  }
  return;
 }
 if(i>n ||i<0)return;
  helper(n,a,tsum,sum+a[i],i+1);
  helper(n,a,tsum,sum-a[i],i+1);
}
    
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        helper(nums.size(),nums,target,0,0);
        return flag;
    }
};