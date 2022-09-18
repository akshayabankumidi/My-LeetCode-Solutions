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
     vector<int> smallestSubarrays(vector<int>& A) {
            unordered_map<int,int>mp;
            vi ans(sz(A),1);
            rev(i,sz(A)-1,0){
                  fo(j,0,30){
                     if(A[i]&(1<<j))
                         mp[j]=i;
                      ans[i]=max(ans[i],mp[j]-i+1);
                  } 
               }
         return ans;
    }
};