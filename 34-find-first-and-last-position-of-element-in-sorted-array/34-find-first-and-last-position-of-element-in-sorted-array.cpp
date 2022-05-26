#define pb push_back
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int first=-1,last=-1;
        vector<int>ans;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){first=mid;r=mid-1;}
            else if(nums[mid]>target){r=mid-1;}
            else{l=mid+1;}
        }
         l=0;r=nums.size()-1;
          while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){last=mid;l=mid+1;}
            else if(nums[mid]<target){l=mid+1;}
            else{r=mid-1;}
        }
        ans.pb(first);ans.pb(last);
        return ans;
    }
};