class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int ,int>m;
        priority_queue<int> pq;
        
        for(int i=0; i<arr.size(); i++)
        {
            m[arr[i]]++;
        }
        
        for(auto i:m)
        {
            pq.push(-i.second);
        }
        
        while(!pq.empty()){
            if(-pq.top()<=k) k-=(-pq.top());
            else return pq.size();
            pq.pop();
        }
        
        return  0;
    }
};