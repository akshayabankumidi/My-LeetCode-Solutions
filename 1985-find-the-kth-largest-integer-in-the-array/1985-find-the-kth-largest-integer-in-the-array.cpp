class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<pair<int,string>>pq;
        for(auto x:nums)
            pq.push({x.size(),x});
        while(k>1){
            pq.pop();
            k--;
    }
        return pq.top().second;
    }
};