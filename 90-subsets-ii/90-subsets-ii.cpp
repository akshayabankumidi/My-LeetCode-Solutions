#define fo(i,a,b) for(int i=a;i<b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define ll long long
#define all(x) x.begin(),x.end()
#define pb push_back
#define vi vector<int>
#define sz(x) int(x.size())
#define vvi vector<vector<int>>
#define all(x) x.begin(),x.end()

class Solution
{
    public:
    set<vector<int>> ans;
    
    void helper(int n,vi& temp,int ind,vi& A){
        ans.insert(temp);
        fo(i,ind,n){
            temp.pb(A[i]);
            helper(n,temp,i+1,A);
            temp.pop_back();
            }
        //return;
        }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& A)
    { vi temp;
     // fo(i,0,sz(A))mp[A[i]]=1;
     sort(all(A));
      helper(sz(A),temp,0,A);
      vvi ans1;
      for(auto x:ans)ans1.pb(x);
      return ans1;
    }
};