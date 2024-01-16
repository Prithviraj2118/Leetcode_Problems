class RandomizedSet {
public:
    vector<int> v;
    unordered_map<int, int> m;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.find(val) == m.end()){
            m[val]=v.size();
            v.emplace_back(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(m.find(val) != m.end()){
            v.erase(v.begin()+m[val]);
            m.erase(val);
            for(int i=0; i<v.size(); i++){
                m[v[i]]=i;
            }
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return v[rand() % v.size()];  //Return random from vector(each element has same probability)
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */