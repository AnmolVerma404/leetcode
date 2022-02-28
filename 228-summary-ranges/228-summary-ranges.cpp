class Solution {
public:
    vector<string> summaryRanges(vector<int>& v) {
        if(!v.size()) return {};
        vector<string>res;
        int start = v[0],end = v[0];
        for(int i = 1;i<v.size();i++){
            if(v[i]==v[i-1]+1){
                end = v[i];
            }else{
                if(start==end) res.push_back(to_string(end));
                else{
                    res.push_back(to_string(start) + "->" +to_string(end));
                }
                start = v[i];
                end = v[i];
            }
        }
        if(start == end ){ 
            res.push_back(to_string(end));        
        }else{
            res.push_back(to_string(start) + "->" +to_string(end));
        }
        return res;
    }
};