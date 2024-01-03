class DataStream {
public:
    map<int, int> m;
    int v, k1;
    queue<int> q;
    DataStream(int value, int k) {
        v=value, k1=k;
    }
    
    bool consec(int num) {
        q.push(num);
        m[num]++;
        if(q.size()>k1){
            if(m[q.front()] > 1) m[q.front()]--;
            else m.erase(q.front());
            q.pop();
        }
        if(m.size()>1 || q.size()<k1) return false;
        else if(m.size()==1 && m[v]==k1) return true;
        return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */