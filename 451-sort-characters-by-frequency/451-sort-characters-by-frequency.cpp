
class Solution {
public:
    string frequencySort(string s) {
      priority_queue<pair<int,char>>pq;
        map<char,int>m;
        for(int i=0;i<s.size();i++)m[s[i]]++;
        for(auto x:m){
          pq.push(make_pair(x.second,x.first));
        }
        string ans="";
        while(!pq.empty()){
            int x=pq.top().first;
            char temp=pq.top().second;
            for(int i=0;i<x;i++){
                ans+=temp;
            }
            pq.pop();
        }
        return ans;
        
    }
};