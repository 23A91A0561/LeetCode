1class Solution {
2public:
3    int minPairSum(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int Max=-1;
6        int n=nums.size();
7        for(int i=0;i<=n/2;i++)
8        {
9            Max=max(Max,nums[i]+nums[n-i-1]);
10        }
11        return Max;
12    }
13};