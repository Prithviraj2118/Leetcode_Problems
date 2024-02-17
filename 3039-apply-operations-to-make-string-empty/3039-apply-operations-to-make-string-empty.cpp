class Solution {
public:
    string lastNonEmptyString(string s) {
        // string ans=s;
        // set<char> s1;
        // int i=0;
        // while(s.size()!=0){
        //     ans=s;
        //     s1.clear();
        //     i=0;
        //     while(i<s.size()){
        //         if(s1.find(s[i])==s1.end()){
        //             s1.insert(s[i]);
        //             s.erase(s.begin()+i);
        //         }
        //         else i++;
        //     }
        // }
        // return ans;
        unordered_map<char, int> m;
        for(auto x:s){
            m[x]++;
        }
        priority_queue<pair<int, char>> pq;
        pair<int, char> p;
        for(auto x:m){
            p.first=x.second, p.second=x.first;
            pq.push(p);
        }
        set<char> s1;
        int mx=pq.top().first;
        // int k
        while(!pq.empty() && pq.top().first==mx){
            s1.insert(pq.top().second);
            pq.pop();
        }
        string ans;
        unordered_map<char, int> occ;
        for(int i=s.size()-1; i>=0; i--){
            if(occ.find(s[i])==occ.end()) occ[s[i]]=i;
        }
        priority_queue<pair<int, char>> pq1;
        for(auto x:s1){
            p.first=occ[x], p.second=x;
            pq1.push(p);
        }
        while(!pq1.empty()){
            ans+=pq1.top().second;
            pq1.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};