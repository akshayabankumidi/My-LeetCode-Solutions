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
    int longestIdealString(string s, int k) {
        map<char,int>mp;
        vector<char>a(26);
        char c='a';
        fo(i,0,26){a[i]=c;c++;}
        //for(auto x:a)cout<<x<<" ";
        int ans=0;
        fo(i,0,sz(s)){
            int temp=0;
            int x=s[i]-'a';
            fo(j,0,k+1){//cout<<s[i];
                
               if(j>0 and (j+x)<26){temp=max(temp,mp[a[j+x]]);}
               if(x-j>=0){temp=max(temp,mp[a[x-j]]);}
            }
            mp[s[i]]=temp+1;
            ans=max(ans,mp[s[i]]);
        }//for(auto x:mp)cout<<x.ff<<" "<<x.ss<<"\n";
        return ans;
    }
};