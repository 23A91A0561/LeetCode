1class Solution {
2public:
3    int findNonMinOrMax(vector<int>& nums) {
4        if(nums.size()<3)
5        {
6            return -1;
7        }
8        sort(nums.begin(),nums.end());
9        return nums[nums.size()/2];
10    }
11};