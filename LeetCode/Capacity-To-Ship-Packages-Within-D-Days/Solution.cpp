1class Solution {
2public:
3    int check(vector<int>& weights,int shipSize)
4    {
5        int sum=0,days=1;
6        for(auto &i:weights)
7        {
8            sum+=i;
9            if(sum>shipSize)
10            {
11                days++;
12                sum=i;
13            }
14        }
15        return days;
16    }
17    int shipWithinDays(vector<int>& weights, int days) {
18        int sum=0;
19        for(auto &i:weights)
20        {
21            sum+=i;
22        }
23        int l=*max_element(weights.begin(),weights.end());
24        int h=sum;
25        int ans=0;
26        while(l<=h)
27        {
28            int m=(l+h)/2;
29            if(check(weights,m)<=days)
30            {
31                ans=m;
32                h=m-1;
33            }
34            else
35            {
36                l=m+1;
37            }
38        }
39        return ans;
40    }
41};