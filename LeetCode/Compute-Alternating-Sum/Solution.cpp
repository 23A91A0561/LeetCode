1class Solution {
2public:
3    int alternatingSum(vector<int>& nums) {
4        int e=0,o=0;
5        for(int i=0;i<nums.size();i++)
6        {
7            if(i%2==0)
8            {
9                e+=nums[i];
10            }
11            else
12            {
13                o+=nums[i];
14            }
15        }
16        return e-o;
17    }
18};