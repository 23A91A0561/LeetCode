1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        map<int,int>m;
5        while(n!=0)
6        {
7            m[n%10]++;
8            n/=10;
9        }
10        int sum=0;
11        for(auto &i:m)
12        {
13            sum+=(i.first*i.second);
14        }
15        return sum;
16    }
17};