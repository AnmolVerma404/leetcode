class Solution {
public:
    int calPoints(vector<string>& v) {
        vector<int>res;
        int n = v.size();
        for(int i = 0;i<n;i++){
            int m = res.size();
            if(v[i] == "+"){
                // cout<<v[i]<<" 1\n";
                res.push_back(res[m-1]+res[m-2]);
            }else if(v[i]=="D"){
                // cout<<v[i]<<" 2\n";
                res.push_back(2*res[m-1]);
            }else if(v[i] == "C"){
                // cout<<v[i]<<" 3\n";
                res.pop_back();
            }else{
                // cout<<stoi(v[i])<<" 4\n";
                res.push_back(stoi(v[i]));
            }
        }
        int sum = 0;
        for(auto i : res) sum+=i;
        return sum;
    }
};