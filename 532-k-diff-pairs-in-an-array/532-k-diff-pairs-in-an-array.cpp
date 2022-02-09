class Solution {
public:
    int findPairs(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int n = v.size(),c = 0;
        set<pair<int,int>>st;
        for(int i = 0;i<n;i++){
            int low = 0,high = n-1;
            while(low<=high){
                int mid = low + (high - low)/2;
                int t = k+v[i];
                if(v[mid]==t){
                    // cout<<"Find";
                    // cout<<v[mid]<<" "<<v[i]<<"\n";
                    // c++;
                    if(mid!=i){
                        st.insert({v[mid],v[i]});
                    }
                    break;
                }else if(v[mid]<t){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        // for(auto i : st){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        return st.size();
    }
};