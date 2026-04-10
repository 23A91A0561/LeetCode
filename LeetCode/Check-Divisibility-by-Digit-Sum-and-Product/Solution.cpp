1class Solution {
2public:
3    bool checkDivisibility(int n) {
4        int t=n;
5        int sum=0,product=1;
6        while(n!=0)
7        {
8            sum+=n%10;
9            product*=n%10;
10            n/=10;
11        }
12        cout <<sum <<" " <<product;
13        if(t%(sum+product))
14        {
15            return false;
16        }
17        return true;
18    }
19};