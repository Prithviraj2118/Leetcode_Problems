class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int, int>> s;
        pair<int, int> p;
        p.first=0, p.second=0;
        s.insert(p);
        
        for(int i=0; i<path.size(); i++){
            if(path[i]=='N'){
                p.second+=1;
                if(s.find(p) != s.end()) return true;
                s.insert(p);
            }
            else if(path[i]=='S'){
                p.second-=1;
                if(s.find(p) != s.end()) return true;
                s.insert(p);
            }
            else if(path[i]=='E'){
                p.first+=1;
                if(s.find(p) != s.end()) return true;
                s.insert(p);
            }
            else{
                p.first-=1;
                if(s.find(p) != s.end()) return true;
                s.insert(p);
            }
        }
        
        return false;
    }
};