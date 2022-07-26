class Solution {
public:
    void ms(int s,int m,int e,vector<int>&v){
        vector<int>temp(e-s+1);
        
        int i = s,j = m+1,k = 0;
        
        while(i<=m && j<=e){
            if(v[i]<v[j]){
                temp[k++] = v[i++];
            }else{
                temp[k++] = v[j++];
            }
        }
        
        while(i<=m) temp[k++] = v[i++];
        while(j<=e) temp[k++] = v[j++];
        
        for(i = s;i<=e;++i){
            v[i] = temp[i-s];
        }
    }
    void merge(int s,int e,vector<int>&v){
        if(s<e){
            int m = (s+e)/2;
            merge(s,m,v);
            merge(m+1,e,v);
            ms(s,m,e,v);
        }
    }
    int majorityElement(vector<int>& v) {
        int n = v.size();
        merge(0,n-1,v);
        return v[n/2];
    }
};