class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakp=-1;
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i]>nums[i-1]){
                breakp=i-1;break;
            }
        }cout<<breakp;
        if(breakp!=-1){
         for (int i = nums.size() - 1; i >= 0; i--){
             if(nums[breakp]<nums[i]){
            swap(nums[breakp],nums[i]);
            reverse(nums.begin()+breakp+1,nums.end());
                 break;
         }
        }
     
        }
        
        else reverse(nums.begin(),nums.end());
        
    }
};