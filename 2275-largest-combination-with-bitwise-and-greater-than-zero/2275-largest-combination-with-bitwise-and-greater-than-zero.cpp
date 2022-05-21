class Solution {
public:
    int largestCombination(vector<int>& a) {
  
            int cnt=0,ans=0;
            for(int j=0;j<=30;j++){
                cnt=0;
                for(int i=0;i<a.size();i++){
                    if(a[i]&1)cnt++;
                a[i]=a[i]>>1;
               
            }
                ans=max(ans,cnt);
        }
        return ans;
        
    }
};