class Solution {
public:
    string largestGoodInteger(string num) {
        int i=0, j=0;
        string maxi="", temp;
        
        while(j<num.size()){
            temp.clear();
            while(num[i] == num[j] && temp.size()<3){
                temp += num[j];
                j++;
            }
            if(temp.size()==3) {
                maxi = max(maxi, temp);
            }
            i=j;
        }
        return maxi;
    }
};