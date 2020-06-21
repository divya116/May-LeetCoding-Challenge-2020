class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) 
    {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int result=0;
        for (int i=0; i<rows; i++)
        {
            for (int j=0; j<cols; j++)
            {
                if (i==0 || j==0 || matrix[i][j]==0)
                    result+=matrix[i][j];
                else
                {
                    int gridval=min(matrix[i-1][j], min(matrix[i][j-1], matrix[i-1][j-1]))+matrix[i][j];
                    result+=gridval;
                    matrix[i][j]=gridval;
                }
            }
        }
                                    
        return result;
    }/*
        int countSquares(vector<vector<int>>& A) 
        {
        int res = 0;
        for (int i = 0; i < A.size(); ++i)
        {
            for (int j = 0; j < A[0].size(); j++)
            {
                if (A[i][j] && i && j)
                    A[i][j] += min({A[i - 1][j - 1], A[i - 1][j], A[i][j - 1]});
                res+=A[i][j];
            }
        }
        return res;
    }*/

};
