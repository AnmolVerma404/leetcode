class MyHashMap {
public:
    vector<int>mp;
    MyHashMap(): mp(1e6+7,-1){};
    
    void put(int key, int value) {
        if(mp[key] == -1){
            mp[key] = value;
            return;
        }
        mp[key] =value;
    }
    
    int get(int key) {
        return mp[key];
    }
    
    void remove(int key) {
        mp[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */