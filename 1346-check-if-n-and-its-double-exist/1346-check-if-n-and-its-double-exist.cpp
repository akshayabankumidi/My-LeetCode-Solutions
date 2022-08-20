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
    bool checkIfExist(vector<int>& arr) {
        sort(all(arr));
        int zcnt=0;
        fo(i,0,sz(arr))if(arr[i]==0)zcnt++;
      fo(i,0,sz(arr)){
          ll temp=abs(arr[i]);//cout<<temp<<"\n";
          if(temp%2==0 and temp!=0){//cout<<arr[i]<<"\n";
          int x=arr[i]/2;cout<<x<<"\n";
            //  cout<<binary_search(arr.begin(),arr.end(),x);
          if(binary_search(arr.begin(),arr.end(),x)>=1)return true;
      }
          else if(temp==0 and zcnt>1)return true;
      }
        return false;
    
    }
};