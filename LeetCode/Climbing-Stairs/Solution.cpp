1class Solution {
2public:
3    int climbStairs(int n) {
4        vector<int>dp(n+1);
5        dp[0]=1;
6        dp[1]=1;
7        for(int i=2;i<=n;i++)
8        {
9            dp[i]=dp[i-1]+dp[i-2];
10        }
11        return dp[n];
12    }
13};