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
    bool bs(vi& nums,int t){
     int low=0,high=sz(nums)-1;
     int mid;
     while(low<=high){
         mid=low+(high-low)/2;
         if(nums[mid]==t)return true;
         else if(nums[mid]>t) high=mid-1;
         else low=mid+1;
         
     }
        return false;
    }
    int last(vi& nums,int t){//find last true
    int low=0,high=sz(nums)-1;
     int mid,ans=0;
     while(low<=high){
         mid=low+(high-low)/2;
         if(nums[mid]<=t){ans=mid;low=mid+1;}
         else high=mid-1;
         
     }
        return ans;
    }
    int first(vi& nums,int t){//first true 
     int low=0,high=sz(nums)-1;
     int mid,ans=0;
     while(low<=high){
         mid=low+(high-low)/2;
         if(nums[mid]>=t){ans=mid;high=mid-1;}
         else low=mid+1;
         
     }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        //check for target 
        if(!bs(nums,target))
            return {-1,-1};
        else{
            int l=last(nums,target);
            int f=first(nums,target);
            cout<<f<<" "<<l;
            return {f,l}; 
            //return {0,0};
        }
    }
};