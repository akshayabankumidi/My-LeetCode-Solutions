class Solution {
public:
    vector<int> getRow(int rowIndex) {
         int numRows=rowIndex+1;
         vector<vector<int>>a(numRows,vector<int>(numRows,1));
         // vector<vector<int>>ans;
          vector<int>finans;
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
            if(i==rowIndex){
                return b;
            }
            
        }
        return finans;
       
    }
};