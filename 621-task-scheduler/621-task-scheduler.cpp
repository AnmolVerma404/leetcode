class Solution
{
public:
    int leastInterval(vector<char> &tasks, int n)
    {
        unordered_map<char, int> mp;
        priority_queue<int> pq;
        for (char c : tasks)
        {
            mp[c]++;
        }
        for (auto c : mp)
        {
            pq.push(c.second);
        }
        int res = 0;
        while (!pq.empty())
        {
            int time = 0;
            vector<int> temp;
            for (int i = 0; i < n + 1; i++)
            {
                if(!pq.empty()){
                    temp.push_back(pq.top() - 1);
                    pq.pop();
                    time++;    
                }
            }
            for (auto t : temp)
            {
                if (t)
                {
                    pq.push(t);
                }
            };
            res += pq.empty() ? time : n + 1;
        }
        return res;
    }
};