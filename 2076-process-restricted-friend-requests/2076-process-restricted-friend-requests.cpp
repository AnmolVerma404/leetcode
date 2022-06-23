class Solution {
public:
    vector<int>par;
    vector<int>rank;
    int findPar(int u){
        if(u == par[u]){
            return u;
        }
        return par[u] = findPar(par[u]);
    }
    void unionn(int u,int v){
        u = findPar(u);
        v = findPar(v);
        if(rank[u]>rank[v]){
            par[v] = u; 
        }else if(rank[v]>rank[u]){
            par[u] = v;
        }else{
            par[u] = v;
            rank[v]++;
        }
    }
    vector<bool> friendRequests(int n, vector<vector<int>>& rest, vector<vector<int>>& req) {
        par.resize(n,0);
        for(int i = 0;i<n;i++){
            par[i] = i;
        }
        rank.resize(n,0);
        vector<bool>res;
        for(auto &r : req){
            int u = r[0],v = r[1];
            int paru = findPar(u),parv = findPar(v);
            bool flag = true;
            if(paru!=parv){
                for(auto &t : rest){
                    int rtu = t[0],rtv = t[1];
                    int partu = findPar(rtu),partv = findPar(rtv);
                    if((paru == partu && parv == partv) || (paru == partv && parv == partu) ){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    unionn(paru,parv);
                }
            }
            res.push_back(flag);
        }
        return res;
    }
};