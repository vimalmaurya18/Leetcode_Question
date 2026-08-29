class Solution {
public:
    vector<int> next(vector<int>& vec)
    {
        vector<int>ans(vec.size(),0);
        stack<int>s;
        s.push(-1);
        int i=vec.size()-1;
        while(i>=0)
        {
            while(s.top()!=-1 && vec[s.top()]>=vec[i])
            {
                s.pop();
            }
           ans[i]=s.top();
           s.push(i);
           i--;
        }
        return ans;
    }
     vector<int> pre(vector<int>& vec)
    {
        vector<int>ans(vec.size(),0);
        stack<int>s;
        s.push(-1);
        int i=0;
        while(i<=vec.size()-1)
        {
            while(s.top()!=-1 && vec[s.top()]>=vec[i])
            {
                s.pop();
            }
           ans[i]=s.top();
           s.push(i);
           i++;
        }
        return ans;
    }
     int maxarea(vector<int>& vec)
     {
        int ans=0;
        vector<int>nextgreater(vec.size(),0);
        nextgreater=next(vec);

        vector<int>pregreater(vec.size(),0);
        pregreater=pre(vec);
        //calculating the area 
       for(int i=0;i<vec.size();i++)
       {
        int l=vec[i];
        if(nextgreater[i]==-1)
        nextgreater[i]=vec.size();
        int b=nextgreater[i]-pregreater[i]-1;
        ans=max(ans,l*b);
       }
       return ans;
     }
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int>p(matrix[0].size(),0);
        for(int i=0;i<matrix[0].size();i++)
        {
            p[i]=matrix[0][i]-'0';
        }
         int ans=maxarea(p);
         for(int i=1;i<matrix.size();i++)
         {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]=='1')
                p[j]++;
                else
                p[j]=0;
            }
           int j=maxarea(p);
           ans=max(ans,j);
         }
         return ans;
    }
};