1class Solution {
2public:
3    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
4        int sum=0;
5        for(int i=1;i<points.size();i++)
6        {
7           int x=abs(points[i-1][0]-points[i][0]);
8           int y=abs(points[i-1][1]-points[i][1]);
9           sum+=max(x,y);
10        }
11        return sum;
12    }
13};