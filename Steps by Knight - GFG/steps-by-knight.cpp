// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	 int x4[8] = {2, 1, -1, -2, -2, -1, 1, 2};
     int y4[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    int minStepToReachTarget(vector<int>&K,vector<int>&T,int N)
	{   
	    vector<vector<int>>vis(N,vector<int>(N,-1));
	    queue<pair<int,int>>q;
	    vis[K[0]-1][K[1]-1]=0;
	    q.push({K[0]-1,K[1]-1});
	    while(!q.empty()){
	        int a=q.front().first;
	        int b=q.front().second;
	       
	        q.pop();
	       // if(a==(T[0]-1) && b==(T[1]-1))return cnt;
	        for(int d=0;d<8;d++){
	            int nx=a+x4[d];
	            int ny=b+y4[d];
	            
	            if(nx>=0 && nx<N && ny>=0 && ny<N && vis[nx][ny]==-1){
	                q.push({nx,ny});
	                vis[nx][ny]=vis[a][b]+1;
	            }
	        }
	       
	    }
	    return vis[T[0]-1][T[1]-1];
	    //return -1;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends