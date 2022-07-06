class Solution {
public:
    int minimumTotal(vector<vector<int>>& v) {
        int n = v.size();
        vector<int> prev(n, 0), curr(n, 0);
        for (int i = 0; i < n; ++i)
        {
            prev[i] = v[n - 1][i];
        }
        for (int i = n - 2; i >= 0; --i)
        {
            for (int j = i; j >= 0; --j)
            {
                int down = v[i][j] + prev[j];
                int downRight = v[i][j] + prev[j + 1];
                curr[j] = min(down, downRight);
            }
            prev = curr;
        }
        return prev[0];
    }
};