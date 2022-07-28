#define fo(i,a,b) for(int i=a;i<b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define ll long long
#define all(x) x.begin(),x.end()
#define pb push_back


class Solution {
public:
    vector<string> helper(ll n){
        if(n==1)return{"0","1"};
        vector<string>temp;
        vector<string>temp1;
        temp1=helper(n-1);
        fo(i,0,temp1.size()){temp.pb('0'+temp1[i]);}
        rev(i,temp1.size()-1,0){temp.pb('1'+temp1[i]);}
        return temp;
    }
    vector<int> grayCode(int n) {
        vector<string>ans=helper(n);
        vector<int>finans;
        
        fo(i,0,ans.size()){
            int temp=0;//cout<<ans[i]<<"\n";
            int sz=ans[i].size();
            fo(j,0,ans[i].size()){
               //cout<<ans[i][j]<<" ";
                if(ans[i][j]=='1')
                temp+=pow(2,sz-j-1);
            }//cout<<"\n";
            finans.pb(temp);
        }
       return finans; 
    }
};