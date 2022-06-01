class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int>g[n];
        vector<int>inOrder(n,0);
        for(auto i : pre) g[i[1]].push_back(i[0]);
        for(int i = 0;i<n;i++){
            for(auto j : g[i]){
                inOrder[j]++;
            }
        }
        queue<int>q;
        for(int i = 0;i<n;i++){
            if(inOrder[i] == 0) q.push(i);
        }
        int count = 0;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            count++;
            for(auto i : g[top]){
                inOrder[i]--;
                if(inOrder[i] == 0) q.push(i);
            }
        }
        if(count == n) return true;
        return false;
    }
};