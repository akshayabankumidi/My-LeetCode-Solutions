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
// T T  T F F F
//last true
//<=k
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vi mcnt;
        fo(i,0,sz(arr))mcnt.pb(arr[i]-(i+1));
        int low=0,high=sz(mcnt)-1;
        for(auto x:mcnt)cout<<x<<" ";cout<<"\n";
        int mid,ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(mcnt[mid]<k){
                ans=mid;
                low=mid+1;
                }
            else high=mid-1;
        }
        if(ans==-1){return k;}
        return arr[ans]+(k-mcnt[ans]);
        
    }
};