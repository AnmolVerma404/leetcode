class Solution {
public:
    int minPartitions(string n) {
        int res = 0;
        for(int i = 0;i<n.size();++i){
            int curr = n[i] - '0';
            res = max(res,curr);
            if(res == 9) return res;
        }
        return res;
    }
};