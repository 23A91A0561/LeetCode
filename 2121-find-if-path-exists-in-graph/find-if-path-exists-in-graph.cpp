class Solution {
public:
    bool dfs(int node,int destination,vector<vector<int>>& adj,vector<int>& visited)
    {
        if(node==destination)
        {
            return true;
        }
        visited[node]=1;
        for(auto &i:adj[node])
        {
            if(!visited[i])
            {
                if(dfs(i,destination,adj,visited))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(auto &i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int>visited(n,0);
        return dfs(source,destination,adj,visited);
    }
};