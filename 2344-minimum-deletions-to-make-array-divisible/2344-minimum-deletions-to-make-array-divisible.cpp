class Solution {
public:
    #define all(x) x.begin(),x.end()
    vector<int>f;
    void factors(int n){
     for(int i=1;i*i<=n;i++){
         if(n%i==0){
             if(n%i==i)f.push_back(i);
             else{ f.push_back(i);f.push_back(n/i);}
         }
     }           

    }
    int minOperations(vector<int>& nums, vector<int>& numsDivide){
    map<int,int>mp;
    int  gcdofall=0;
        for(int i=0;i<numsDivide.size();i++)
        {
            gcdofall=__gcd(gcdofall,numsDivide[i]);
        }
        factors(gcdofall);//sqrt(n)
        sort(all(f));//nlogn
        
       for(int i=0;i<nums.size();i++){mp[nums[i]]++;}
        int flag=0,store=0;
        for(int i=0;i<f.size();i++){
            if(mp[f[i]]){
                store=f[i];
                flag=1;break;
            }
        }
        if(flag==0)return -1;
        else{
            int ans=0;
            for(auto x:mp){
                if(x.first<store){
                    ans+=x.second;
                }
                else break;
            }
            return ans;
        }
    
    }
};