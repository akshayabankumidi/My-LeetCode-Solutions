class Solution {
public:
    int climbStairs(int n) {
        //tabulation
        vector<int>a(n+2);
        a[1]=1;
        a[2]=2;
        if(n==1)return 1;
        if(n==2)return 2;
        for(int i=3;i<=n;i++){
            a[i]=a[i-1]+a[i-2];
        //   a[3] = a[2]+a[1]
        }
        return a[n];
    }
};