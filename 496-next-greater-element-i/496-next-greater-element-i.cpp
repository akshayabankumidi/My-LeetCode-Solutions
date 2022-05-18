class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>stk;
        
        vector<int>ans;
        vector<int>b(nums2.size(),-1);
        for(int i=0;i<nums2.size();i++){
            while(!stk.empty() and nums2[stk.top()]<nums2[i]){
                b[stk.top()]= nums2[i];cout<<nums2[i]<<"\n";
                stk.pop();
            }
            stk.push(i);
            
        }
        for(auto x:b)cout<<x<<" ";
         for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                   ans.push_back(b[j]);
                    break;
                }
            }
        }
        return ans;
    }
};