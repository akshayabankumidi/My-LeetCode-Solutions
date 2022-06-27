#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define all(x) (x).begin(), (x).end()
class Solution {
public:
    string longestPalindrome(string s) {
            ll n=s.size();
//two cases
//case1: palindrome with odd length
//fix middle char 
//compare leftchar and rightchar as long as they r same
ll ans1=0;
string news="";

fo(i,1,n-1){//babad
    ll p=i-1,q=i+1,cnt=0;
    string left="",right="";
    while( p>=0 && q<n &&s[p]==s[q]){
       left+=s[p];
       right+=s[q];
        cnt+=2;p--;q++;
    }cnt++;
    if(ans1<cnt){
         reverse(all(left));
        ans1=cnt;news=left+s[i]+right;
    }
}//debug(ans1)
//case2:palindrome with even length
//same like odd length 
//here we need not to fix middle char


if(s.size()<3){
    
if(s.size()==1)return s;
else{
    if(s[0]==s[1])return s;
    else {
    string temp="";temp+=s[0];return temp;
         }
}
}
fo(i,0,n-1){//aeefeeg
    ll p=i,q=i+1,cnt=0;
    string left="",right="";
    while(p>=0 &&q<n&&s[p]==s[q]){
       right+=s[p];cnt+=2;p--;q++;
    }
    if(ans1<cnt){
        ans1=cnt;
        left=right;reverse(all(left));
        news=left+right;
    }
  
}
return news;  
        
        
}
};