1class Solution {
2public:
3    int orangesRotting(vector<vector<int>>& grid) {
4        int n=grid.size();
5        int m=grid[0].size();
6        queue<pair<int,int>>q;
7        int ans=0,fresh=0;
8        for(int i=0;i<n;i++)
9        {
10            for(int j=0;j<m;j++)
11            {
12                if(grid[i][j]==2)
13                {
14                    q.push({i,j});
15                }
16                if(grid[i][j]==1)
17                {
18                    fresh++;
19                }
20            }
21        }
22        vector<pair<int,int>>check={{-1,0},{1,0},{0,-1},{0,1}};
23        while(!q.empty() && fresh>0)
24        {
25            int qn=q.size();
26            for(int i=0;i<qn;i++)
27            {
28                auto [r,c]=q.front();
29                q.pop();
30                for(auto &d:check)
31                {
32                    int dr=d.first+r;
33                    int dc=d.second+c;
34                    if((dr<0 || dr>=n) || (dc<0 || dc>=m) || grid[dr][dc]!=1)
35                    {
36                        continue;
37                    }
38                    grid[dr][dc]=2;
39                    q.push({dr,dc});
40                    fresh--;
41                }
42            }
43            ans++;
44        }
45        if(fresh)
46        {
47            return -1;
48        }
49        return ans;
50    }
51};