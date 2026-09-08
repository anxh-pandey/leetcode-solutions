class MyHashSet {
public:
    vector<int> set;
    MyHashSet() {
        vector<int> ans(1e6 + 5,0);
        set=ans;
    }
    
    void add(int key) {
        set[key]=1;
    }
    
    void remove(int key) {
        set[key]=0;
    }
    
    bool contains(int key) {
        return set[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */