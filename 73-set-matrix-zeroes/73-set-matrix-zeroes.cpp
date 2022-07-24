class Solution
{
public:
    // x -> is the row , and y-> is the column
    void makeZero(int x, int y, int n, int m, vector<vector<int>> &matrix)
    {
        // This iteration will make all the rows of xth row zero

        for (int i = 0; i < m; ++i)
        {
            matrix[x][i] = 0;
        }

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
            makeZero(zeroLocation[i].first, zeroLocation[i].second, n, m, matrix);
        }
    }
};
