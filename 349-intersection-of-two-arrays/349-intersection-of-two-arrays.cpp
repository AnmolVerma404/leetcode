class Solution {
public:
    vector<int> intersection(vector<int> &v1, vector<int> &v2)
{
    sort(v2.begin(), v2.end());
    unordered_map<int, int> mp;
    int n = v1.size(), m = v2.size();
    for (int i = 0; i < n; i++)
    {
        int target = v1[i];
        int low = 0, high = m - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (v2[mid] == target)
            {
                mp[target]++;
                break;
            }
            else if (v2[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    vector<int> res;
    for (auto i : mp)
    {
        res.push_back(i.first);
    }
    return res;
}
};