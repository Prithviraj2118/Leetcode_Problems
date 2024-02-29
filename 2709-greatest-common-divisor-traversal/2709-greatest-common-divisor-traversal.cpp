class Solution {
public:
    bool canTraverseAllPairs(vector<int>& nums) {
        if(nums.size() == 1) return true;
        if(*min_element(nums.begin(), nums.end()) == 1) return false;
        /////////// intiate the edges of the graph ///////////

        //here we assing every index with the primary factors of the number in that index
        vector<vector<int>>idx(nums.size());

        //here we assing every primary factor with the indexes of the numbers that they have this primary factor
        unordered_map<int, vector<int>>prime;

        //this loop to find the primary factor of each elemet and fill (prime) and (idx)
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            if(n % 2 == 0){
                idx[i].push_back(2);
                prime[2].push_back(i);
            }
            while(n % 2 == 0)n /= 2; // we do that to not to go through the even number to check
            for(int j = 3; j * j <= n; j += 2){
                if(n % j == 0){
                    idx[i].push_back(j);
                    prime[j].push_back(i);
                }
                while(n % j == 0)n /= j;
            }
            if(n > 2){
                idx[i].push_back(n);
                prime[n].push_back(i);
            }
        }
        /////////// traverse over the graph ///////////
        vector<bool>visIdx(nums.size(), 0); //mark the visited indexes
        unordered_map<int, bool>visPrime; //mark the visted primary factors
        queue<int>q;
        q.push(0);
        visIdx[0] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto& p: idx[node]){ // every index assigned with primary factors
                if(visPrime[p])continue;
                visPrime[p] = 1;
                for(auto& i: prime[p]){ // and here every primary factor assigned with some indexes
                    if(!visIdx[i]){
                        q.push(i);  //finding a new node to traverse over
                        visIdx[i] = 1;
                    }
                }
            }
        }
       /////////// check if the graph is connected ///////////
        //if the graph connected now I can traverse between the indices of the array
        for(int i = 0; i < nums.size(); i++){
            if(!visIdx[i])return false;
        }
        return true;
    }
};