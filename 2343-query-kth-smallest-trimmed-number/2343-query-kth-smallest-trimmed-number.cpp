class Solution {
public:
 
  static bool comp( pair<string,int>&p1,pair<string,int>&p2){
            if(p1.first==p2.first) {
               return p1.second<p2.second;
                
            }
           return p1.first<p2.first;
        }

    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
      
        vector<int>ans(queries.size(),0);
        
        for(int i=0;i<queries.size();i++){//n 100
             vector<pair<string,int>>a(nums.size(),{"",0});
            for(int j=0;j<nums.size();j++){//n 100
                a[j]={nums[j].substr(nums[0].size()-queries[i][1]),j};
        }
           sort(a.begin(),a.end(),comp);//nlogn
            
           ans[i]=a[queries[i][0]-1].second;
            
        }

        return ans;
        
        // trimi ki
    }
};