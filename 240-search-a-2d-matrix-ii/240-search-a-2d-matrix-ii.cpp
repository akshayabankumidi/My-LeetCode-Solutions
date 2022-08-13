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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       fo(i,0,sz(matrix[0])){
           int low=0,high=sz(matrix)-1;
           int mid;
           while(low<=high){
               mid=low+(high-low)/2;
               if(matrix[mid][i]==target)return true;
               else if(matrix[mid][i]>target)high=mid-1;
               else low=mid+1;
           }
       }return false; 
        
    }
};