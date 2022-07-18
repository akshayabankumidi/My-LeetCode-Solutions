class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //
        int ans=INT_MAX,p=0,sum=0;
        
        for(int i=0;i<nums.size();i++){
          sum+=nums[i];
          while(sum>=target){
              ans=min(ans,i-p+1);
              sum-=nums[p];
               p++;
          }  
        }
        if(ans==INT_MAX)return 0;
        
        return ans;
    }
};