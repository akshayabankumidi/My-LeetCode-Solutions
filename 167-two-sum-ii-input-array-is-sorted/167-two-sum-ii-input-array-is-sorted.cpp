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

int bs(int low, int high,vi& numbers,int x){
    int ans=-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(numbers[mid]==x){
           ans=mid+1;break;
        }
        else if(numbers[mid]>x)high=mid-1;
        else low=mid+1;
    }
    return ans;
}


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vi ans;
        fo(i,0,sz(numbers)){
           int x=target-numbers[i];
           int temp1=bs(i+1,sz(numbers)-1,numbers,x);cout<<temp1<<"\n";
           int temp2=bs(0,i-1,numbers,x);
           if(temp1!=-1){
               ans.pb(i+1);ans.pb(temp1); break;
           }
          if(temp2!=-1){
               ans.pb(i+1);ans.pb(temp2); break;
          }
        }
        return ans;
    }
};