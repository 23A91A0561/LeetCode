1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        for(int i=0;i<nums.size();i++)
5        {
6            nums[i]=nums[i]+i;
7        }
8        int n=nums.size();
9        int r=0;
10        for(int i=0;i<n;i++)
11        {
12            if(i>r)
13            {
14                return false;
15            }
16            r=max(r,nums[i]);
17            if(r>=n-1)
18            {
19                return true;
20            }
21        }
22        return false;
23    }
24};