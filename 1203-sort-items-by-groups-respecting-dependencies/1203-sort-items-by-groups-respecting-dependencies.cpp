class Solution {
public:
    vector<int> sortItems(
        int n, int m, 
        vector<int>& group, 
        vector<vector<int>>& beforeItems
    ) {

        int groupId = m;
        for (int i = 0; i < n; i++){
            group[i] = group[i]==-1 ? groupId++ : group[i];
        }

        unordered_map<int , vector<int>> groupGraph, itemGraph;
        vector<int> groupIndeg(groupId, 0), itemIndeg(n, 0), 
                    itemOrder, groupOrder, ans;

        for(int v=0; v<n; v++){
            for(auto u: beforeItems[v]){
                itemGraph[u].push_back(v);
                itemIndeg[v]++;
                if(group[u]!=group[v]){
                    groupGraph[group[u]].push_back(group[v]);
                    groupIndeg[group[v]]++;
                }
            }
        }

        itemOrder = topSort(itemGraph, itemIndeg);
        groupOrder = topSort(groupGraph, groupIndeg);


        if(itemOrder.empty() || groupOrder.empty()){
            return vector<int>(0);
        }

        map<int, vector<int>> orderedGroups;
        for(int item: itemOrder){
            orderedGroups[group[item]].push_back(item);
        }
       
        for(int group: groupOrder){
            for(int item: orderedGroups[group]){
                ans.push_back(item);
            }
        }

        return ans;
    }

    vector<int> topSort(
        unordered_map<int, vector<int>> &graph,
        vector<int> &indeg

    ){
        vector<int> visited;
        stack<int> st;

        for(int i=0; i<indeg.size(); i++){
            if(indeg[i] == 0){
                st.push(i);
            }
        }

        while(!st.empty()){
            int curr = st.top();
            st.pop();
            visited.push_back(curr);
            for(auto v: graph[curr]){
                indeg[v]--;
                if(indeg[v]==0){
                    st.push(v);
                }
            }
        }

        return visited.size() == graph.size()? visited : vector<int>(0);
    }
};