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
    int maximumProduct(vector<int>& nums, int k) {
    priority_queue<int,vector<int>,greater<int>>MinH;
        fo(i,0,sz(nums)){MinH.push(nums[i]);}
        int x;
        while(k--){
            x=MinH.top();
            x+=1;
            MinH.pop();
            MinH.push(x);
        }
    long long int ans=1;
    long long int temp;
        while(!MinH.empty()){
            temp=MinH.top();
            ans=(ans%mod*temp%mod)%mod;
            MinH.pop();
        }
        return ans;
    }
};