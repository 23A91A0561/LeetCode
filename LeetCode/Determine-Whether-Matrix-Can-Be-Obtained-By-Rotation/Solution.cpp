1class Solution {
2public:
3    void rotate(vector<vector<int>>& mat)
4    {
5        int n=mat.size();
6        for(int i=0;i<n;i++)
7        {
8            for(int j=i;j<n;j++)
9            {
10                swap(mat[i][j],mat[j][i]);
11            }
12        }
13        for(auto &i:mat)
14        {
15            reverse(i.begin(),i.end());
16        }
17    }
18    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
19        for(int i=0;i<4;i++)
20        {
21            bool flag=true;
22            rotate(mat);
23            for(int i=0;i<mat.size();i++)
24            {
25                for(int j=0;j<mat.size();j++)
26                {
27                    if(mat[i][j]!=target[i][j])
28                    {
29                        flag=false;
30                    }
31                }
32            }
33            if(flag)
34            {
35                return true;
36            }
37        }
38        return false;
39    }
40};