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


int ft(vi& nums,int i){
    int ans=-1;
    int low=0,high=sz(nums)-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(nums[mid]>=i){ans=mid;high=mid-1;}
        else low=mid+1;
    }
    return ans;
}
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(all(nums));for(auto x:nums){cout<<x<<" ";}cout<<"\n";
        fo(i,0,sz(nums)+1){
            int first=ft(nums,i);
            int  last=sz(nums)-1;
          if(first!=-1){
              
              if(last-first+1==i)
                return i;
           }
            
        }return -1;
    }
};