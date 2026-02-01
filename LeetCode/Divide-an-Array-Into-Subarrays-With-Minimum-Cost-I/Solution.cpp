1class Solution {
2public:
3    int minimumCost(vector<int>& nums) {
4        sort(nums.begin()+1,nums.end());
5        int sum=0;
6        for(int i=0;i<3;i++)
7        {
8            sum+=nums[i];
9        }
10        return sum;
11    }
12};