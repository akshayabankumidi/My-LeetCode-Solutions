class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>a(numRows,vector<int>(numRows,1));
        vector<vector<int>>ans;
    
        for(int i=1;i<numRows;i++){
            for(int j=1;j<i;j++){
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
        for(int i=0;i<numRows;i++){
            vector<int>b;
            for(int j=0;j<=i;j++){
                b.push_back(a[i][j]);
            }
            ans.push_back(b);
        }
        return ans;
    }
};