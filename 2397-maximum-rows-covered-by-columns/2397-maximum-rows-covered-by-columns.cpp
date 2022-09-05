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
    void helper(vvi& mat,int c,int cnt,int &ans,vi vis,int i){
        if(cnt==c){
            vi temp(sz(mat[0]));
            //int m=0;
            fo(i,0,sz(mat[0])){
                if(vis[i]){//cout<<
                fo(j,0,sz(mat)){
                    temp[i]=temp[i]|mat[j][i];
                }
            }
            }
            
            int cntr=0,flag=1;
            fo(i,0,sz(mat)){
                flag=1;
                fo(j,0,sz(mat[0])){
                    if(mat[i][j]==1 and temp[j]!=1){
                        flag=0;
                    }
                }
                if(flag)cntr++;
            }
            ans=max(ans,cntr);cout<<cntr<<"\n";
            
            return;
        }
        
        if(i==mat[0].size())return;
        vis[i]=1;
        helper(mat,c,cnt+1,ans,vis,i+1);
        vis[i]=0;
        helper(mat,c,cnt,ans,vis,i+1);
        
        
    }
    int maximumRows(vector<vector<int>>& mat, int cols) {
       int ans=0;
       vi vis(sz(mat[0]));
       helper(mat,cols,0,ans,vis,0);
       return ans;
        
    }
};