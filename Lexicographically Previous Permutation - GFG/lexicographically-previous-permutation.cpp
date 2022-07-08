// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string prevPermutation(string s) {
        int breakp=-1;
        for(int i=s.size()-1;i>=1;i--){
            if(s[i]<s[i-1]){
                breakp=i-1;break;
            }
        }
        if(breakp!=-1){
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]<s[breakp]){
                    swap(s[breakp],s[i]);
                   reverse(s.begin()+breakp+1,s.end());
                   return s;
                }
            }
            
          
        }
        else return "None";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout<<ob.prevPermutation(s)<<endl;
    }
    return 0;
}
  // } Driver Code Ends