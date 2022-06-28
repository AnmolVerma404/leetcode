class Solution {
public:
    int minDeletions(string s) {
        
        int minDel = 0;
        int freq[26] = {0};
        
        for(auto x : s) {
            freq[x - 'a']++;
        }
        
        map<int, int> freqToCount;
        
        for(int i=0; i<26; i++) {
            
            if(freqToCount.find(freq[i]) == freqToCount.end()) 
            {
                if(freq[i] > 0)
                    freqToCount[freq[i]] = 1;
                else freqToCount[freq[i]] = 0;
            }
            else freqToCount[freq[i]]++;
            
        }
        
        for(auto it = freqToCount.rbegin(); it != freqToCount.rend(); it++) {
            
            auto count = it->second;
            auto freq = it->first;
            if(count > 1 and freq > 0) {
                auto decre = count - 1;
                freqToCount[freq - 1] += decre;
                minDel += decre;
            }
        }
        return minDel;
    }
};

static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();