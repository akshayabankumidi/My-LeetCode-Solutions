// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    map<int,int>vis;
    vector<int>ans;
    void bfs(vector<int> adj[],int v){
         queue<int>q;
         q.push(v);
         vis[v]=1;
         while(!q.empty()){
             v=q.front();q.pop();
             ans.push_back(v);
             for(auto x:adj[v]){
                 if(!vis[x]){
                 q.push(x);
                 vis[x]=1;
                 }
             }
         }
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    //     vector<vector<int>>g(n,vector<int>());
        
    //   for(auto x:adj){//adj list
    //      g[x[0]].push_back(x[1]); 
    //   }
     
      for(int i=0;i<1;i++){
          if(!vis[i]){
              bfs(adj,i);
          }
      }
      return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends