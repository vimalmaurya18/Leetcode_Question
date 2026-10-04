class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int sum=0,a;
        unordered_map<int,bool>visited;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(visited[grid[i][j]]==true)
                {
                    a=grid[i][j];
                }
                else
                {
                    visited[grid[i][j]]=true;
                }
                sum=sum+grid[i][j];
            }
        }
        int add=((n*n)*((n*n)+1)/2);
        int b=add-(sum-a);
        vector<int>ans;
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};