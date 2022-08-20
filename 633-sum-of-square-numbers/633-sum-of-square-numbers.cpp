#define fo(i,a,b) for(ll i=a;i<b;i++)
#define rev(i,a,b) for(ll i=a;i>=b;i--)
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
    bool bs(ll temp){
        ll low=0,high=1e5+1;
        ll mid;
        while(low<=high){
            mid=low+(high-low)/2;
            ll x=mid*mid;
            if(x==temp)return true;
            else if (x>temp)high=mid-1;
            else low=mid+1;
        }
        return false;
    }
    bool judgeSquareSum(int c) {
        fo(i,0,c+1){
          ll x=i*i;
          ll temp=c-x;
          if(temp>=0){
              if(bs(temp))return true;
          }
          else break;
        }
        return false;
    }
};