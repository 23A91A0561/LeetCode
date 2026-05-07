1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int n=nums.size()-1;
5        int Max=n;
6        for(int i=n;i>=0;i--)
7        {
8            if(nums[i]>=Max-i)
9            {
10                Max=i;
11            }
12        }
13        if(Max==0)
14        {
15            return true;
16        }
17        return false;
18    }
19};