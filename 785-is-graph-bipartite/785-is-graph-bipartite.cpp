class Solution {
public:
    bool colorCycle(vector<vector<int>> &g, vector<int> &color, int curr)
{
    queue<int> q;
    q.push(curr);
    color[curr] = 1;
    while (!q.empty())
    {
        int top = q.front();
        q.pop();
        for (auto i : g[top])
        {
            if (color[i] == -1)
            {
                color[i] = 1 - color[top];
                q.push(i);
            }
            else if (color[i] == color[top])
            {
                return false;
            }
        }
    }
    return true;
}
bool bfs(vector<vector<int>> &g, int n)
{
    vector<int> color(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            if (!colorCycle(g, color, i))
            {
                return false;
            }
        }
    }
    return true;
}
   
    bool isBipartite(vector<vector<int>>& g) {
        int n = g.size();
        return bfs(g,n);
    }
};