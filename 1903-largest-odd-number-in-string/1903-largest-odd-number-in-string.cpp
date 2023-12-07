class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.size()-1;
        int ch=num[i]-48;
        
        while(i>=0 && ch%2==0){
            num.pop_back();
            i--;
            if(i<0) break;
            ch = int(num[i])-48;
            cout << ch << endl;

        }
        return num;
    }
};