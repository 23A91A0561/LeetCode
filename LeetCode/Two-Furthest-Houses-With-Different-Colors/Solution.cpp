1class Solution {
2public:
3    int maxDistance(vector<int>& colors) {
4        int Max=INT_MIN;
5        for(int i=0;i<colors.size()-1;i++)
6        {
7            for(int j=i+1;j<colors.size();j++)
8            {
9                if(colors[i]!=colors[j])
10                {
11                    Max=max(Max,abs(i-j));
12                }
13            }
14        }
15        return Max;
16    }
17};