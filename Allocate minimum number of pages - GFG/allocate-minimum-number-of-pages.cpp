// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isValid(int arr[], int n, int m, int pages){
      int allocate=1;
      int sum=0;
      for(int i=0;i<n;i++){
          sum+=arr[i];
          if(sum>pages){
              allocate++;
              sum=arr[i];
          }
          if(allocate>m){
              return false;
          }
      }
      return true;
    }
    
    int findPages(int arr[], int n, int m) 
    {
       
        if(m > n)
            return -1;
        int ans = -1;
        auto it=max_element(arr,arr+n);
        int low = *it, high = accumulate(arr,arr+n,0);
        int mid ;
        while(low <= high){
            mid = low + (high-low)/2;
            if(isValid(arr,n,m,mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends