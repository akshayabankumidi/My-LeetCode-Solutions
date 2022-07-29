#define fo(i,a,b) for(int i=a;i<b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define ll long long
#define all(x) x.begin(),x.end()
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define sz(x) int(x.size())
class Solution {
public:
    map<int,int>mp;
    vvi ans;
    void helper(vi& nums,vi& temp,int n){//cout<<mp.size();
        if(n==sz(temp)){
            ans.pb(temp);return;
        }
        for(auto x:mp){
            if(x.second>0){
            mp[x.first]--;
            temp.pb(x.first);//cout<<x.first<<" ";
            helper(nums,temp,n);
            mp[x.first]++;
            temp.pop_back();
           }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>temp;
        fo(i,0,sz(nums)){mp[nums[i]]++;}
        helper(nums,temp,sz(nums));
        return ans;
    }
};