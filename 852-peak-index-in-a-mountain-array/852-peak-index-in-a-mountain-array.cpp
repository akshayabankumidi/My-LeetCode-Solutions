class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int bpoint;
        //find break point
        int low=1,high=arr.size()-2;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(mid>0 and mid<arr.size()-1){
                if(arr[mid-1]<arr[mid] and arr[mid]>arr[mid+1]){bpoint=mid;break;}
                else if(arr[mid-1]>arr[mid] and arr[mid]>arr[mid+1]) high=mid-1;
                else low=mid+1;
            }
            
        }
        return bpoint;
        
    }
};