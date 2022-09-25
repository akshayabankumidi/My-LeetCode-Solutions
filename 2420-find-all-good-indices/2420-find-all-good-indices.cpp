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
    vector<int> goodIndices(vector<int>& nums, int k) {
        vi ans;
        int n=sz(nums);
        vi pref(n+1,0);
        vi post(n+1,0);
        pref[0]=1;
        fo(i,1,n){
            if(nums[i-1]>=nums[i])pref[i]+=pref[i-1]+1;
                else pref[i]=1;
        }
        post[n-1]=1;
        rev(i,n-2,0){
            if(nums[i]<=nums[i+1])post[i]+=post[i+1]+1;
                else post[i]=1;
        }
        // fo(i,0,sz(pref))cout<<pref[i]<<" ";
        // cout<<"\n";
        // fo(i,0,sz(post))cout<<post[i]<<" ";
        fo(i,k,n-k)
        {
            if(pref[i-1]>=k and post[i+1]>=k)ans.pb(i);
            
        }   
        return ans;
    }
};