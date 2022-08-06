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
#define sz(x) int(x.size())

class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        map<int,int>mp;
        ll ans=0,dist=1;
        fo(i,0,sz(tasks)){
            if(mp[tasks[i]]==0)//not vis
            {  
                mp[tasks[i]]=dist;
                
            }
            
            else{
                
                
               int x=dist-mp[tasks[i]];
                if(x<=space){
                      ans+=(space-x)+1;
                    dist+=(space-x)+1;
                    mp[tasks[i]]=dist;
                }
                else{
                  mp[tasks[i]]=dist; 
                }
              
                
            
         
        }
            dist++;
        }
        ans+=sz(tasks);
            return ans;
    }

        
    
};