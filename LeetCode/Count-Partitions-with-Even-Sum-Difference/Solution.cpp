1class Solution {
2public:
3    int countPartitions(vector<int>& nums) {
4        int n=nums.size()-1;
5        for(int i=1;i<nums.size();i++)
6        {
7            nums[i]=nums[i-1]+nums[i];
8        }
9        int c=0;
10        for(int i=0;i<nums.size()-1;i++)
11        {
12            if((nums[i]-(nums[n]-nums[i]))%2==0)
13            {
14                c++;
15            }
16        }
17        return c;
18    }
19};