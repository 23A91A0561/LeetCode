1class Solution {
2public:
3    vector<int> minBitwiseArray(vector<int>& nums) {
4        vector<int>ans(nums.size(),-1);
5        for(int i=0;i<nums.size();i++)
6        {
7            for(int j=nums[i]/2;j<nums[i];j++)
8            {
9                if((j | (j+1))==nums[i])
10                {
11                    ans[i]=j;
12                    break;
13                }
14            }
15        }
16        return ans;
17    }
18};