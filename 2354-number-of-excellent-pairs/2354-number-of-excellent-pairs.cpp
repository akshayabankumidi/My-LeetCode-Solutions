#define fo(i,a,b) for(int i=a;i<b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define ll long long
#define all(x) x.begin(),x.end()
#define pb push_back
#define sz(x) int(x.size())
#define vi vector<int>
#define vvi vector<vector<int>>
class Solution {
public:
    long long countExcellentPairs(vector<int>& nums, int k) {
        map<int,int>mp;
        set<int>nums1;
        fo(i,0,sz(nums)){nums1.insert(nums[i]);}
        for(auto x:nums1){
         int temp=x;
         int scnt=0;
        fo(j,0,32){
           if(temp&1)scnt++;
            temp=temp>>1;
        }cout<<scnt<<"\n";
            mp[scnt]++;
        }
        ll ans=0;//cout<<mp.size()<<"\n";
        for(auto x:mp){
           for(auto y:mp){
               if(x.first+y.first>=k){
                  // if(x.first==y.first)ans+=1;
                    ans+=(x.second*y.second);
               }
           }
        }
        return ans;
        
    }
};