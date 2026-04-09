1class Solution {
2public:
3    int gcd(int a,int b)
4    {
5        if(b==0)
6        {
7            return a;
8        }
9        return gcd(b,a%b);
10    }
11    int gcdOfOddEvenSums(int n) {
12        int even=(n*(n+1));
13        int odd=n*n;
14        return gcd(even,odd);
15    }
16};