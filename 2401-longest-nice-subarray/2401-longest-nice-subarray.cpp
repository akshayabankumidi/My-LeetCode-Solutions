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
#define mod 1000000007
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int p=0,q=0;
        int n=sz(nums);
        int cnt=0;
        int ans=0;
        vector<int>store(32);
      
        while(p<n and q<n){
            int x=nums[q],flag=0;
             fo(i,0,32){
              if(x&1)store[i]+=1;
                x=x>>1; 
            }
           
          fo(i,0,32){
                if(store[i]>1){
                  flag=1;
                }
            }
           if(flag==1){ 
                    int y=nums[p];
                    fo(i,0,32){
                       if(y&1)store[i]-=1;
                        y=y>>1;
                    }
                    cnt=0;
                    p++;
                   }
            
           
          
          
            ans=max(ans,q-p+1);q++;
        }
      
        return ans;
    }
};