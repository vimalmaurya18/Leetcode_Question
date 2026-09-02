class Solution {
public:
void row(vector<vector<int>>& matrix,int x)
{
    for(int i=0;i<matrix[0].size();i++)
    {
        matrix[x][i]=0;
    }
}
void col(vector<vector<int>>& matrix,int x)
{
    for(int i=0;i<matrix.size();i++)
    {
        matrix[i][x]=0;
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>Row;
        vector<int>Col;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    Row.push_back(i);
                    Col.push_back(j);
                }
            }
        }
        for(int i=0;i<Row.size();i++)
        {
            row(matrix,Row[i]);
        }
        for(int i=0;i<Col.size();i++)
        {
            col(matrix,Col[i]);
        }
    }
};