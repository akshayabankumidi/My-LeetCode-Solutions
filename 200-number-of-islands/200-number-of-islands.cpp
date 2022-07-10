class Solution {
public:
    int x4[4]={-1,0,1,0};
    int y4[4]={0,1,0,-1};
    void dfs(int i,int j,int r,int c,vector<vector<char>>& grid){
        if(i>=r||j>=c||i<0||j<0||grid[i][j]=='0')return;
        grid[i][j]='0';
        for(int d=0;d<4;d++){
            int a=i+x4[d];
            int b=j+y4[d];
            dfs(a,b,r,c,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        int r=grid.size();
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                int c=grid[i].size();
                if(grid[i][j]=='1'){
                    cnt++;
                    dfs(i,j,r,c,grid);
                }
            }
        }
        return cnt;
       
    }
};