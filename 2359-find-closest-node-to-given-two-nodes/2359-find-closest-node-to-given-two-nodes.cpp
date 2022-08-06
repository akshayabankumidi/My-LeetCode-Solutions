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
        if(p1.ss==p2.ss)return p1.ff<p2.ff;
        return p1.ss<p2.ss;
        
    }
    
    void bfs(int node,vi& dis,map<int,int>vis,vector<vi>&edges1){
        queue<int>q;
        q.push(node);
        vis[node]=1;//cout<<node;
        while(!q.empty()){
            node=q.front();q.pop();
            for(int i=0;i<edges1[node].size();i++){
                int  x=edges1[node][i];
                if(x>=0 and vis[x]!=1 )
                {
                    q.push(x);
                    vis[x]=1;
                    dis[x]=1+dis[node];
                }
            }
       }
        
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        vi dist1(sz(edges));
        vi dist2(sz(edges));
        map<int,int>vis1,vis2;
        vector<vector<int>>edges1(sz(edges));
        fo(i,0,sz(edges)){//adj list
            edges1[i].pb(edges[i]);
        }
        // for(auto x:edges1){
        //    // cout<<x<<":";
        //     for(auto y:x)cout<<y<<" ";
        //     cout<<"\n";
        // }
        dist1[node1]=1;dist2[node2]=1;
       bfs(node1,dist1,vis1,edges1);
       bfs(node2,dist2,vis2,edges1);
        vector<pair<int,int>>ans;
        fo(i,0,sz(edges)){
         if(dist1[i]!=0 and dist2[i]!=0)
             ans.pb({i,max(dist1[i],dist2[i])});
        }
        sort(all(ans),comp);
        for(auto x:ans)cout<<x.ff<<" "<<x.ss<<"\n";
       if(sz(ans)!=0)  return ans[0].ff;
        return -1;
    }
};