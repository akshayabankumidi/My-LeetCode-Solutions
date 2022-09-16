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
    vector<int> findOriginalArray(vector<int>& changed) {
     map<int,int>mp;
     vi ans;
     vi e;
     fo(i,0,sz(changed)){mp[changed[i]]++;}
    
    
     for(auto x:mp){//odd
        if(x.ff%2!=0){
            if(x.ss==mp[x.ff*2]){
                fo(i,0,x.ss){
                    ans.pb(x.ff);
                }
                mp[x.ff*2]=-1;
            }
            else if(x.ss<mp[x.ff*2]){
                 fo(i,0,x.ss){
                    ans.pb(x.ff);
                }
                mp[x.ff*2]=mp[x.ff*2]-x.ss;
                
            }
            else return e;
        }
     
     }
        if(mp[0]){
            if(mp[0]%2==0){
                  fo(i,0,mp[0]/2)ans.pb(0);
                mp[0]=-1;
            }
            else return e;
        }
        for(auto x:mp){
            if(x.ff%2==0 and x.ss!=-1){
                if(x.ss==mp[x.ff*2]){
                    fo(i,0,x.ss)ans.pb(x.ff);
                    mp[x.ff*2]=-1;
                    
                }  else if(x.ss<mp[x.ff*2]){
                 fo(i,0,x.ss){
                    ans.pb(x.ff);
                }
                mp[x.ff*2]=mp[x.ff*2]-x.ss;
                
            }
            else return e;
            }
        }
        if(sz(ans)==(sz(changed))/2)return ans;
        else return e;
        
        
    }
};