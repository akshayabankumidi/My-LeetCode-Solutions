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
//ans==>last - first true
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        fo(i,0,sz(grid)){
            int low=0,high=sz(grid[0])-1;
            int mid;
            int first=-1;
            while(low<=high){
                mid=low+(high-low)/2;
                if(grid[i][mid]>=0)low=mid+1;
                else{first=mid;high=mid-1;}
            }
            if(first!=-1)ans+=(sz(grid[0])-first);
            
        }
        return ans;
    }
};