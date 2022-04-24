class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>c;
    unordered_map<string,pair<int,int>>r;
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string sn, int t) {
        c[id] = {sn,t};
    }
    
    void checkOut(int id, string s, int t) {
        string se = c[id].first + '-' + s;
        r[se] = {r[se].first + (t-c[id].second),r[se].second+1};
        c.erase(id);
    }
    
    double getAverageTime(string ss, string es) {
        auto p = r[ss+'-'+es];
        return (double)p.first/p.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 ["UndergroundSystem","checkIn","checkIn","checkIn","checkOut","checkOut","checkOut","getAverageTime","getAverageTime","checkIn","getAverageTime","checkOut","getAverageTime"]
[[],[45,"Leyton",3],[32,"Paradise",8],[27,"Leyton",10],[45,"Waterloo",15],[27,"Waterloo",20],[32,"Cambridge",22],["Paradise","Cambridge"],["Leyton","Waterloo"],[10,"Leyton",24],["Leyton","Waterloo"],[10,"Waterloo",38],["Leyton","Waterloo"]]
 */