class Solution
{
public:
    // x -> is the row , and y-> is the column
    void makeZeroRow(int x,int n, int m, vector<vector<int>> &matrix)
    {
        // This iteration will make all the rows of xth row zero

        for (int i = 0; i < m; ++i)
        {
            matrix[x][i] = 0;
        }
    }
    void makeZeroCol(int y, int n, int m,vector<vector<int>> &matrix)
    {
        // This iteration will set the column of the yth row to zero

        for (int i = 0; i < n; ++i)
        {
            matrix[i][y] = 0;
        }
    }

    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int, int>> zeroLocation;
        vector<bool> rowZero(n, false);
        vector<bool> colZero(m, false);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    zeroLocation.push_back({i, j});
                }
            }
        }
        int size = zeroLocation.size();
        for (int i = 0; i < size; ++i)
        {
            int row = zeroLocation[i].first;
            int col = zeroLocation[i].second;
            if (rowZero[row] == false)
            {
                makeZeroRow(row, n, m, matrix);
                rowZero[row] = true;
            }

            if (colZero[col] == false)
            {
                makeZeroCol(col, n, m, matrix);
                colZero[col] = true;
            }
        }
    }
};
