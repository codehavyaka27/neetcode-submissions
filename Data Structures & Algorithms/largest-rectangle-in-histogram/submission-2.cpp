class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea=0;
        stack<int> st;
        
        for(int i=0;i<=heights.size();i++){
            
            while(!st.empty()&&(i==heights.size()||heights[i]<heights[st.top()])){
                int h=heights[st.top()];
                st.pop();
                int left=st.empty()?-1:st.top();
                int right=i;
                int width=right-left-1;
                int area=h*width;
                maxarea=max(area,maxarea);
            }
            st.push(i);
        }
        return maxarea;

        
    }
};


