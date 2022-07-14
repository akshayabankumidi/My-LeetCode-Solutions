class Solution {
public:
    int ans=0;
    int x4[4]={-1,0,0,1};
    int y4[4]={0,-1,1,0};
      queue<pair<int,int>>q;
    void bfs(vector<vector<int>>&vis,vector<vector<int>>&grid,int N,int M){
      //  vis[i][j]=0;//grid[i][j]=2;
       // queue<pair<int,int>>q;
       // q.push({i,j});
        while(!q.empty()){
             pair<int,int>p=q.front();
           // ans++;
            q.pop();
            for(int d=0;d<4;d++){
                int a=p.first+x4[d];
                int b=p.second+y4[d];
                if(a>=0 &&a<N&&b>=0&&b<M&&vis[a][b]==-1&&grid[a][b]==1){ //cout<<a<<" "<<b<<"\n";
                    vis[a][b]=vis[p.first][p.second]+1;//grid[a][b]=2;
                    q.push({a,b});
                }
                } 
        }
        
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
       vector<vector<int>>vis(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==-1 && grid[i][j]==2){
                   q.push({i,j});vis[i][j]=0;
                }
              
            }
        } bfs(vis,grid,n,m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<vis[i][j]<<" ";
                if(grid[i][j]==1&&vis[i][j]==-1)return -1;
                else {
                    ans=max(ans,vis[i][j]);
                }
            }cout<<"\n";
        }
    
        return ans;
    }
};