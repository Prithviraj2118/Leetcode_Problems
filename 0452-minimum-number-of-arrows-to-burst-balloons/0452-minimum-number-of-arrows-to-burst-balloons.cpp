class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(), points.end());
        
        int a = points[0][0], b = points[0][1], cnt = 1; // Count curr position as well
        
        for(int i=1; i<points.size(); i++){
            if(points[i][0] > b){
                a = points[i][0], b = points[i][1]; //Change the range
                cnt++;
            }
            else{
                a = points[i][0];   //Update 'a' as 'a' keeps increasing(sorted arr)
                b = min(b, points[i][1]);
            }
        }
        
        return cnt;
    }
};