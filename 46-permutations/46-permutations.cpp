class Solution {
public:
vector<vector<int>>ans;
void helper(vector<int>&nums,int n,vector<int>path,map<int,int>m){
        if(n==path.size()){
           ans.push_back(path);
        }
    for(int i=0;i<n;i++){
        if(m[nums[i]]==0){
            path.push_back(nums[i]);
            m[nums[i]]=1;
            helper(nums,n,path,m);
             m[nums[i]]=0;
             path.pop_back();
            
        }
    }
    
    
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>path;
        map<int,int>m;
        int n=nums.size();
        helper(nums,n,path,m);
        return ans;
    }
};