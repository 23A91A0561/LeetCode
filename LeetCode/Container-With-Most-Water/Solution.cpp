1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int ans=INT_MIN;
5        int l=0,h=height.size()-1;
6        while(l!=h)
7        {
8            int temp=min(height[l],height[h])*(h-l);
9            ans=max(temp,ans);
10            if(height[l]<=height[h])
11            {
12                l++;
13            }
14            else
15            {
16                h--;
17            }
18        }
19        return ans;
20    }
21};