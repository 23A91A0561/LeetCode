1class Solution {
2public:
3    long long countCommas(long long n) {
4        if(n<1000)
5        {
6            return 0;
7        }
8        long long ans=0;
9        if(n>=1000)
10        {
11            ans+=n-999;
12        }
13        if(n>=1000000)
14        {
15            ans+=n-999999;
16        }
17        if(n>=1000000000)
18        {
19            ans+=n-999999999;
20        }
21        if(n>=1000000000000)
22        {
23            ans+=n-999999999999;
24        }
25        if(n>=1000000000000000)
26        {
27            ans+=n-999999999999999;
28        }
29        return ans;
30    }
31};