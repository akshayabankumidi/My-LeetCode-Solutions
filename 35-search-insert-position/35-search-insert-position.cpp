#define all(x) x.begin(),x.end()



class Solution {
public:
    int bs(vector<int>& nums,int k){
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==k)return mid;
            else if(nums[mid]>k) r=mid-1;
            else l=mid+1;
        }
        return -1;
    }
    int searchInsert(vector<int>& nums, int target) {
       int temp=bs(nums,target);
       if(temp!=-1){
           return temp;
       }
        else{
         auto it=lower_bound(all(nums),target);
         int var=it-nums.begin();
          return var;
        }
    }
};