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
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int>vec(sz(s)+1);
        map<char,int>mp;
        char chr='a';
        fo(i,0,26){mp[i]=chr;chr++;}
        fo(i,0,sz(shifts)){
            if(shifts[i][2]==0){
              vec[shifts[i][0]]--;
                vec[shifts[i][1]+1]++;
            }
            else{
                 vec[shifts[i][0]]++;
                vec[shifts[i][1]+1]--;
            }
        }
        fo(i,1,sz(s)){
            vec[i]+=vec[i-1];
        }
        string ans="";
        for(auto x: vec)cout<<x<<" ";cout<<"\n";
        fo(i,0,sz(s)){
              int x=s[i]-'a';
              int y=(x%26+vec[i]%26+26)%26;
              ans+=mp[y];
           
           
        }
        return ans;
    }
};