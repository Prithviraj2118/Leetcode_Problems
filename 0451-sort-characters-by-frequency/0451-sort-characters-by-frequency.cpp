class Solution {
public:
    string frequencySort(string s) {
        
//         unordered_map<char, int> m;
        
//         for(int i=0; i<s.size(); i++)
//         {
//             m[s[i]]++;
//         }
        
//         priority_queue<pair<int, char>> pq;
//         for(auto x:m)
//         {
//             pq.push( {x.second, x.first} ); //
//         }
        
//         string ans;
//         int k;
//         while(!pq.empty())
//         {
            
//             ans = ans+ string(pq.top().first,pq.top().second);   // syntax string(freq, val)  push(val) 'n' times....
//             pq.pop();
//         }
        
// //         while(!pq.empty())
// //         {
// //             ans = ans + pq.top().second;
// //             m[(pq.top()).second]--;
            
// //             if(m[(pq.top()).second] == 0)
// //                 pq.pop();
// //         }
//         return ans;
        
        unordered_map<char, int> m;
        for(auto x:s){
            m[x]++;
        }
        pair<int, char> p;
        priority_queue<pair<int, char>> pq;
        
        for(auto x:m){
            p.first=x.second, p.second=x.first;
            pq.push(p);
        }
        
        string str;
        int k, v;
        while(!pq.empty()){
            k=pq.top().first, v=pq.top().second;
            while(k--){
                str+=v;
            }
            pq.pop();
        }
        return str;
    }
};