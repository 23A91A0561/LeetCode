1class Solution {
2public:
3    int mirrorDistance(int n) {
4        int t=n;
5        int c=0,b=0;
6        while(t!=0)
7        {
8            c=t%10;
9            b=b*10+c;
10            t/=10;
11        }
12        return abs(b-n);
13    }
14};