class Solution {
public:
    int iskthBitSet(int n,int k){
        return (((1<<k)|n)==n);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=1;i<(1<<n);i++){
            int k=0;
           for(int j=0;j<n;j++){
               if(iskthBitSet(i,j)) k=(k|nums[j]);
             }
            mp[k]++;
         
        }
        int temp=-1,store;
        for(auto x:mp){
            if(temp<x.first){
                temp=x.first;
                store=x.second;
            }
        }
        return store;
    }
};