class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        sort(v1.begin(),v1.end());        
        sort(v2.begin(),v2.end());
        unordered_map<int,int>mp;
        vector<int>res;
        for(int i = 0;i<v1.size();i++){
            int target = v1[i];
            int low = 0, high = v2.size() - 1;
            while(low <= high){
                int mid = low + (high - low) / 2;
                if(v2[mid] == target){                                      if(find(res.begin(),res.end(),v2[mid])!=res.end()){
                                break;
                }
                    res.push_back(v2[mid]);
                }else if(v2[mid]< target){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        // for(auto i : mp){
        //     res.push_back(i.first);
        // }
        return res;
    }
};