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
   static bool comp(pair<int,int>&p1,pair<int,int>&p2){
       if(p1.ff==p2.ff)return p1.ss<p2.ss;
       return p1.ff<p2.ff;
        
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>p;
        vector<int>ans;
        fo(i,0,sz(mat)){
            int cnt=0;
            fo(j,0,sz(mat[i])){
                if(mat[i][j])cnt++;
            }
            p.pb({cnt,i});
        }
        sort(all(p),comp);
        fo(i,0,k){
            ans.pb(p[i].second);
        }
        return ans;
    }
};