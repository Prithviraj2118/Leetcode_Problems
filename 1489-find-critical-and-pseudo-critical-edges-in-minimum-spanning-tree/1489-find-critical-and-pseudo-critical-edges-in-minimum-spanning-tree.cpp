class Solution {
public:

    vector<vector<int>> path;

    int n;
    int m;

    vector<vector<int>> helper(bool has)
    {

        vector<vector<int>> psum;

        for(int i=0;i<m;i++)
          {  

            vector<int> visited(n,-1);

            int sum=0;

            if(has)
            {
                visited[path[i][2]]=visited[path[i][3]]=i;            
                sum=path[i][0];
            }

            for(int j=0;j<m;j++)
                if(i!=j)
                {
                    int x=visited[path[j][2]];
                    int y=visited[path[j][3]];

                    if(x==y && x!=-1)
                        continue;

                    if(x==-1 && y==-1)
                        visited[path[j][2]]=visited[path[j][3]]=j;
                    else if(x==-1)
                        visited[path[j][2]]=y;
                    else if(y==-1)
                        visited[path[j][3]]=x;
                    else 
                    {
                        int x1=min(x,y);
                        int y1=max(x,y);

                        for(int &p:visited)
                             if(p==y1)
                                    p=x1;

                    }

                    sum+=path[j][0];

                }

                bool flag=visited[0]!=-1;


                for(int j=0;j<n;j++) 
                    if(visited[0]!=visited[j])
                        {
                            flag=false;
                            break;
                        }
                

                
                psum.push_back({flag?sum:INT_MAX,path[i][1]});
                
          } 

        return psum;
    }

    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges)
     {

         this->m=edges.size();
         this->n=n;

         for(int i=0;i<m;i++)
            path.push_back({edges[i][2],i,edges[i][0],edges[i][1]});

        sort(path.begin(),path.end());

        auto has=helper(true);
        auto hasn=helper(false); 

        vector<vector<int>> res(2);

     

        for(int i=0;i<m;i++)
        {

            if(has[i][0]<hasn[i][0])
                res[0].push_back(has[i][1]);
            else if(has[i][0]==hasn[i][0])
                res[1].push_back(has[i][1]);
            

        }

         return res;
    }
};