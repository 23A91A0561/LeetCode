1class Solution {
2public:
3    int compareBitonicSums(vector<int>& nums) {
4        int max=0;
5        int n=nums.size();
6        int idx=0;
7        for(int i=0;i<nums.size();i++)
8        {
9            if(nums[i]>max)
10            {
11                idx=i;
12                max=nums[i];
13            }
14        }
15        long long a=0,b=0;
16        for(int i=0;i<nums.size();i++)
17        {
18            if(i<=idx)
19            {
20                a+=nums[i];
21            }
22            if(i>=idx)
23            {
24                b+=nums[i];
25            }
26        }
27        if(a==b)
28        {
29            return -1;
30        }
31        else if(a<b)
32        {
33            return 1;
34        }
35        return 0;
36    }
37};