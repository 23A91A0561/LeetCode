1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int>v;
5        for(int i=0;i<nums.size();i++)
6        {
7            int c=0;
8            for(int j=0;j<nums.size();j++)
9            {
10                if(nums[i]>nums[j])
11                {
12                    c++;
13                }
14            }
15            v.push_back(c);
16        }
17        return v;
18    }
19};