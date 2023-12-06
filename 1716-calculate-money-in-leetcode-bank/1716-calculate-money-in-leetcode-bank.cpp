class Solution {
public:
    int totalMoney(int n) {
        int var = 1, money=0;
        int temp;
        while(n/7>0){
            money += ((var+7-1)*(var+7)/2)-(var*(var-1)/2);
            n=n-7;
            var++;
        }
        
        money += ((var+n-1)*(var+n)/2)-(var*(var-1)/2);
        return money;
    }
};