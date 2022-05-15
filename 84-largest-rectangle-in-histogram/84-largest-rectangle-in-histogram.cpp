class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>nser(heights.size());
        vector<int>nsel(heights.size());
        stack<int>s;
        //nearest smaller element on right
        for(int i=0;i<heights.size();i++){//3 3
            while(!s.empty() and heights[s.top()]>heights[i]){
                nser[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){ nser[s.top()]=heights.size();s.pop();}
        //nearst smaller element on left
           for(int i=heights.size()-1;i>=0;i--){//-1 0
            while(!s.empty() and heights[s.top()]>heights[i]){
                nsel[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
       while(!s.empty()){ nsel[s.top()]=-1;s.pop();}
        int temp=0;
        for(int i=0;i<heights.size();i++){
             int var=nser[i]-nsel[i]-1;//cout<<nser[i]<<" "<<nsel[i]<<"\n";
            temp=max(temp,var*(heights[i]));
        }
        return temp;
    }
};