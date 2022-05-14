class Solution {
public:
    int fib(int n) {
        //tabulation
        vector<int>a(n+2);
        a[0]=0;
        a[1]=1;
        if(n==0)return 0;
        if(n==1)return 1;
        for(int i=2;i<=n;i++){
            a[i]=a[i-1]+a[i-2];
        }
        return a[n];
    }
};