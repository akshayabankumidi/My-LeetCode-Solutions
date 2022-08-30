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
    vector<int> topKFrequent(vector<int>& nums, int k) {
       priority_queue<pair<int,int>>maxH;
        vi ans;
       map<int,int>mp;
       fo(i,0,sz(nums)){
          mp[nums[i]]++;
       }
        for(auto x:mp){
           // cout<<x.ss<<" "<<x.ff<<"\n";
            maxH.push({x.ss,x.ff});
        }
        int temp;
        fo(i,0,k){
            temp=maxH.top().ss;//cout<<temp<<" ";
            ans.pb(temp);
            maxH.pop();}
        return ans;
       
    }
};