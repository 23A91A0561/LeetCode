1class Solution {
2public:
3    vector<int> findDegrees(vector<vector<int>>& matrix) {
4        vector<int>ans;
5        for(auto &i:matrix)
6        {
7            int c=0;
8            for(auto &j:i)
9            {
10                if(j==1)
11                {
12                    c++;
13                }
14            }
15            ans.push_back(c);
16        }
17        return ans;
18    }
19};