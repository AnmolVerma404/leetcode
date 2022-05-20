class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i = 0,j = 0;
        vector<int>res;
        for(i = 0, j = 0;i<a.size()&&j<b.size();){
            if(a[i]==b[j]){
                res.push_back(a[i]);
                i++;
                j++;
            }else if(a[i]<b[j]){
                i++;
            }else{
                j++;
            }
        }
        return res;
    }
};