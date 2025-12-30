1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int sum=0,ans=INT_MIN;
5        for(auto &i:nums)
6        {
7            sum+=i;
8            ans=max(ans,sum);
9            if(sum<0)
10            {
11                sum=0;
12            }
13        }
14        return ans;
15    }
16};