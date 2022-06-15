class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>maxH;
        for(int i=0;i<nums.size();i++){maxH.push(nums[i]);}
        int x=maxH.top();
        maxH.pop();
        int y=maxH.top();
        return (x-1)*(y-1);
    }
};