1class Solution {
2public:
3    int minFlips(vector<vector<int>>& grid) {
4        int n=grid.size();
5        int m=grid[0].size();
6        int row=0,column=0;
7        for(auto &i:grid)
8        {
9            for(int j=0;j<m/2;j++)
10            {
11                if(i[j]!=i[m-j-1])
12                {
13                    row++;
14                }
15            }
16        }
17        for(int i=0;i<m;i++)
18        {
19            for(int j=0;j<n/2;j++)
20            {
21                if(grid[j][i]!=grid[n-j-1][i])
22                {
23                    column++;
24                }
25            }
26        }
27        return min(row,column);
28    }
29};