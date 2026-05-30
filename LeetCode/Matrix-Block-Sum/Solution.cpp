1class Solution {
2public:
3    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
4        vector<vector<int>>pre(mat.size(),vector<int>(mat[0].size()));
5        for(int i=0;i<mat.size();i++)
6        {
7            for(int j=0;j<mat[0].size();j++)
8            {
9                if(j==0)
10                {
11                    pre[i][j]=mat[i][j];
12                }
13                else
14                {
15                    pre[i][j]=pre[i][j-1]+mat[i][j];
16                }
17              
18            }
19        }
20        int n=mat.size();
21        int m=mat[0].size();
22        for(int i=0;i<n;i++)
23        {
24            for(int j=0;j<m;j++)
25            {
26                int r1=i-k<0?0:i-k;
27                int r2=i+k>=n?n-1:i+k;
28                int c1=j-k<0?0:j-k;
29                int c2=j+k>=m?m-1:j+k;
30                int sum=0;
31                for(int i=r1;i<=r2;i++)
32                {
33                    sum+=pre[i][c2];
34                    if(c1>0)
35                    {
36                        sum-=pre[i][c1-1];
37                    }
38                }
39                mat[i][j]=sum;
40            }
41        }
42        return mat;
43    }
44};