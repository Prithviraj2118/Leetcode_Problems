class Solution {
public:
    int findTheWinner(int n, int k) {
        deque<int> dq;
        for(int i=1; i<=n; i++){
            dq.push_back(i);
        }
        int cnt=1, temp;
        
        while(dq.size()>1){
            while(cnt!=k){
                temp=dq.front();
                dq.push_back(temp);
                dq.pop_front();
                cnt++;
            }
            dq.pop_front();
            cnt=1;
        }
        return dq.front();
    }
};