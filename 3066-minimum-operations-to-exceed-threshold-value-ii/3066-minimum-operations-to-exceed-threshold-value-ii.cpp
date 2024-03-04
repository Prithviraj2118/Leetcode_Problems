class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long> pq;
        int cnt=0;
        long a=0, b=0, c=0;
        for(auto x:nums){
            pq.push(-x);
        }
        if(pq.size()<=1) return 0;
        while(-pq.top()<k && pq.size()>=2){
            a = -pq.top();
            pq.pop();
            b = -pq.top();
            pq.pop();
            c = min(a, b)*2 + max(a,b);
            cnt++;
            pq.push(-c);
        }
        
        return cnt;
    }
};