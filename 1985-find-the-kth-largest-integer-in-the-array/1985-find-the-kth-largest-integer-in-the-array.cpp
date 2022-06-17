class Solution {
public:
 
    struct comparator {
        bool operator()(string &s1,string &s2) {
 
           if(s1.length()==s2.length()) {
                for(int i=0;i<s1.length();i++) {
                   if(s1[i]!=s2[i]) return s1[i]>s2[i];
                }
              
            }
            return s1.length()>s2.length();
        }
    };
    string kthLargestNumber(vector<string>& nums, int k) {
      
        priority_queue<string,vector<string>,comparator>q;
        
        for(auto it:nums) {
            q.push(it);
            if(q.size()>k) {
                q.pop();
            }
        }

        return q.top();
    }
};