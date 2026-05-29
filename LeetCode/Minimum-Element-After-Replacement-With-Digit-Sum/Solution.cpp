1class Solution {
2public:
3    int check(int a)
4    {
5        int sum=0;
6        while(a!=0)
7        {
8            sum+=a%10;
9            a/=10;
10        }
11        return sum;
12    }
13    int minElement(vector<int>& nums) {
14        int Min=INT_MAX;
15        for(auto &i:nums)
16        {
17            Min=min(Min,check(i));
18        }
19        return Min;
20    }
21};