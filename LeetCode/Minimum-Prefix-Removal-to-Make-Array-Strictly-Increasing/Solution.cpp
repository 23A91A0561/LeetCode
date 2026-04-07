1class Solution {
2public:
3    int minimumPrefixLength(vector<int>& nums) {
4        for(int i=nums.size()-1;i>0;i--)
5        {
6            if(nums[i]<=nums[i-1])
7            {
8                return i;
9            }
10        }
11        return 0;
12    }
13};