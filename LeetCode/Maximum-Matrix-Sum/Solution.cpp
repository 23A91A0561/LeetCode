1class Solution {
2public:
3    long long maxMatrixSum(vector<vector<int>>& matrix) {
4        long long sum=0;
5        int Max=INT_MAX;
6        int c=0;
7        for(auto &i:matrix)
8        {
9            for(auto &j:i)
10            {
11                sum+=abs(j);
12                Max=min(Max,abs(j));
13                if(j<0)
14                {
15                    c++;
16                }
17            }
18        }
19        if(c%2==0)
20        {
21            return sum;
22        }
23        return sum-Max-Max;
24    }
25};