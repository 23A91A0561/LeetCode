1class Solution {
2public:
3    vector<int> limitOccurrences(vector<int>& nums, int k) {
4        int l=0,check=nums[0];
5        vector<int>ans;
6        for(int i=0;i<nums.size();i++)
7        {
8            if(nums[i]==check)
9            {
10                l++;
11            }
12            else
13            {
14                check=nums[i];
15                l=1;
16            }
17            if(l<=k)
18            {
19                ans.push_back(nums[i]);
20            }
21        }
22        return ans;
23    }
24};