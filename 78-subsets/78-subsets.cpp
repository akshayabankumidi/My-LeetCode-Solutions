

class Solution {
public:
    // int setkthbit(int n,int k){
    //     return ((1<<k)|n);
    // }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<(1<<(n));i++){
            vector<int>b;
            if(i==0){ans.push_back(b);continue;}
            int temp=i;cout<<temp<<"\n";
            for(int j=0;j<n;j++){
               
                if(temp&1) b.push_back(nums[j]);
                temp=temp>>1;
            }
            for(auto x:b)cout<<x<<" ";
            cout<<"\n";
           ans.push_back(b);
        }
        return ans;
    }
};