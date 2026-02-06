1class Solution {
2public:
3    int absDifference(vector<int>& nums, int k) {
4        sort(nums.begin(),nums.end());
5        int Max=0;
6        int Min=0;
7        for(int i=0;i<k;i++)
8        {
9            Max+=nums[i];
10        }
11        reverse(nums.begin(),nums.end());
12        for(int i=0;i<k;i++)
13        {
14            Min+=nums[i];
15        }
16        return abs(Max-Min);
17    }
18};