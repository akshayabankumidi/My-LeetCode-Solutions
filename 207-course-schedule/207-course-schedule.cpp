class Solution {
public:
   map<int,int>vis,dfsvis;
    int ContainCycle(int v,vector<vector<int>>&g){
      
        vis[v]=1;
        dfsvis[v]=1;
        for(auto x:g[v]){
            if(vis[x]==0){
            if(ContainCycle(x,g)) {return 1;}
        }
            else if(dfsvis[x]) {return 1;}
        }
        dfsvis[v]=0;
       
        return 0;
        
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
     
        vector<vector<int>>g(numCourses);
        //directed graph
        for(auto x:prerequisites){
            g[x[0]].push_back(x[1]);
        }
       
        for(int i=0;i<numCourses;i++){
          
            if(vis[i]!=1){
            if(ContainCycle(i,g))return false;
        }
        }
        
        return true; 
        
    }
};