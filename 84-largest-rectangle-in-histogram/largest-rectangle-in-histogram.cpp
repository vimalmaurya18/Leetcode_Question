class Solution {
public:
   vector<int>nextsmaller(vector<int>& heights)
   {
    vector<int>ans(heights.size(),0);
    int i=heights.size()-1;
    stack<int>s;
    s.push(-1);
    while(i>=0)
    {
        while(s.top() != -1 && heights[s.top()] >= heights[i])
        {
            s.pop();
        }

        ans[i] = s.top();
        s.push(i);
        i--;
    }
    return ans;
   }
    vector<int>presmaller(vector<int>& heights)
   {
    vector<int>ans(heights.size(),0);
    int i=0;
    stack<int>s;
    s.push(-1);
    while(i<heights.size())
    {
        while(s.top() != -1 && heights[s.top()] >= heights[i])
        {
            s.pop();
        }

        ans[i] = s.top();
        s.push(i);
        i++;
    }
    return ans;
   }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next(n,0);//next smaller store karayenge
        next=nextsmaller(heights);

        vector<int>pre(n,0);//pre smaller store karayenge
        pre=presmaller(heights);
        int ans=0;
        for(int i=0;i<heights.size();i++)
        {
            if(next[i]==-1)
            {
                next[i]=heights.size();
            }
            int b=next[i]-pre[i]-1;
            int l=heights[i];
            int newarea=l*b;
            ans=max(ans,newarea);
        }
        return ans;
    }
};