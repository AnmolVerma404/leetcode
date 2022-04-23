class Solution {
public:
    unordered_map<string,string>ec,dc;
    const string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    // Encodes a URL to a shortened URL.
    string getcode(){
        string code = "";
        for(int i = 0;i<6;i++) code+=chars[rand()%62];
        return "https://tinyurl.com/"+code;
    }
    string encode(string longUrl) {
        if(dc.find(longUrl)!=dc.end()){
            return dc[longUrl];
        }
        string code = getcode();
        ec[code] = longUrl;
        dc[longUrl] = code;
        return code;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return ec[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));