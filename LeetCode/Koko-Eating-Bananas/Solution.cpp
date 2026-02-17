1class Solution {
2public:
3    bool check(int m,vector<int>& v,int h)
4    {
5        long long sum=0;
6        for(auto &i:v)
7        {
8            sum+=ceil(i * 1.0/m);
9        }
10        if(sum <= h)
11        {
12            return true;
13        }
14        return false;
15    }
16    int minEatingSpeed(vector<int>& piles, int h) {
17        int high=INT_MIN;
18        for(auto &i:piles)
19        {
20            high=max(high,i);
21        }
22        int low=1;
23        while(low<=high)
24        {
25            int m=(low+high)/2;
26            if(check(m,piles,h))
27            {
28                high=m-1;
29            }
30            else
31            {
32                low=m+1;
33            }
34        }
35        return low;
36    }
37};