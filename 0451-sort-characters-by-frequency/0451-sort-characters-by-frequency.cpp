class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        priority_queue<pair<int, char>> pq;
        pair<int, char> p;
        for(auto x:s){
            m[x]++;
        }
        for(auto x:m){
            p.first=x.second, p.second=x.first;
            pq.push(p);
        }
        s.clear();
        int k;
        while(!pq.empty()){
            k=pq.top().first;
            while(k--){
                s+=pq.top().second;
            }
            pq.pop();
        }
        return s;
    }
};