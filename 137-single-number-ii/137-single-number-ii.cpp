class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<=31;i++){
            int cnt=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]&1)cnt++;
                 nums[j]=nums[j]>>1;
            }
            if(cnt%3!=0) ans+=(1<<i);
           
        }
        return ans;
    }
};