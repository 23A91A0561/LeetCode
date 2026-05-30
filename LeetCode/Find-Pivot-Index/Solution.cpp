1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        for(int i=1;i<nums.size();i++)
5        {
6            nums[i]=nums[i]+nums[i-1];
7        }
8        int total=nums[nums.size()-1];
9        for(int i=0;i<nums.size();i++)
10        {
11            if(i==0 && total-nums[i]==0)
12            {
13                return i;
14            }
15            else if(i==nums.size()-1 && nums[i-1]==0)
16            {
17                return i;
18            }
19            else if(i>0)
20            {
21                if(nums[i-1]==total-nums[i])
22                {
23                    return i;
24                }
25            }
26        }
27        return -1;
28    }
29};