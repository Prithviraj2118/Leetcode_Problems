class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int i=0, j=0;   //Window start and end pointer
        
        while(j<arr.size()){
            while(j<arr.size() && arr[i]==arr[j]){
                j++;
            }
            if((j-i) > arr.size()/4) return arr[i];  //If element occurs > 25% array
            i=j;    //Update window start
        }
        return -1;  //No element occurs > 25%
    }
};