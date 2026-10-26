class Solution {
public:
    bool canplace(vector<string>& board,int row,int j,int n)
    {
        //This will check that queen is safe at this position or not according to row wise
        for(int i=0;i<n;i++)
        {
            if(board[row][i]=='Q')
            {
                return false;
            }
        }
         //This will check that queen is safe at this position or not according to column wise
        for(int i=0;i<n;i++)
        {
            if(board[i][j]=='Q')
            {
                return false;
            }
        }
         //This will check that queen is safe at this position or not according to daigonal wise
         
         //Left digonal wise
         for(int i=row,k=j;i>=0 && k>=0;i--,k--)
        {
            if(board[i][k]=='Q')
            {
                return false;
            }
        }
        //Right digonal wise
        for(int i=row,k=j;i>=0 && k<n;i--,k++)
        {
            if(board[i][k]=='Q')
            {
                return false;
            }
        }
        return true;
    }
    void placequeen(vector<string>& board,int row,int n,vector<vector<string>>& ans)
    {
        if(row==n)
        {
            ans.push_back(board);
            return;
        }

        for(int j=0;j<n;j++)
        {
            if(canplace(board,row,j,n))
            {
                board[row][j]='Q';
                placequeen(board,row+1,n,ans);
                board[row][j]='.';
            }
        }
        return;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string> board(n,string(n,'.'));
        int row=0;
        placequeen(board,row,n,ans);
        return ans;
    }
};