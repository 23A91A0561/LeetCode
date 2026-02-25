1int check(int n)
2{
3    int sum=0;
4    while(n!=0)
5    {
6        sum+=(n%10)*(n%10);
7        n/=10;
8    }
9    return sum;
10}
11
12class Solution {
13public:
14    bool isHappy(int n) {
15        unordered_set<int>s;
16        while(n!=1)
17        {
18            if(s.find(n)!=s.end())
19            {
20                return false;
21            }
22            s.insert(n);
23            n=check(n);
24        }
25        return true;
26    }
27};