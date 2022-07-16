class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>MaxH;
        vector<int>ans;
        int cnt=0,c=0;
        if(k==1)return nums;
        for(int i=0;i<nums.size();i++){
            cnt++;MaxH.push({nums[i],i});
            if(cnt==k){
                while(1){
                    int temp=MaxH.top().second;//cout<<temp;
                    cout<<c+k;
                  if(temp>=c && temp<c+k){break;}
                    else {
            if(!MaxH.empty()){MaxH.pop();}
                    }
                }//cout<<MaxH.top().first;
                ans.push_back(MaxH.top().first);
                  cnt-=1;
            c++;}
        }
        return ans;
    }
};