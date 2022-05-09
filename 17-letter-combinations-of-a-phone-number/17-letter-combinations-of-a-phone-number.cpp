class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,vector<char>> mp;
        mp['2'] = {'a','b','c'};
        mp['3'] = {'d','e','f'};
        mp['4'] = {'g','h','i'};
        mp['5'] = {'j','k','l'};
        mp['6'] = {'m','n','o'};
        mp['7'] = {'p','q','r','s'};
        mp['8'] = {'t','u','v'};
        mp['9'] = {'w','x','y','z'};
        int n = digits.size();
        vector<string>ans;
        for(int i = 0;i<n;i++){
            char c = digits[i];
            vector<char>chars = mp[c];
            vector<string>tempAns;
            vector<string>temp = ans;
            for(auto el : chars){
                if(i == 0){
                    string s = "";
                    s +=el;
                    ans.push_back(s);
                }else{
                    for(auto str : temp) tempAns.push_back(str + el);
                    ans = tempAns;
                }
            }
        }
        return ans;
    }
};