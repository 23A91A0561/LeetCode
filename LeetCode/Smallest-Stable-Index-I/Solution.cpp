1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n=nums.size();
5        vector<int>arr1(n),arr2(n,INT_MAX);
6        int Max=nums[0];
7        int Min=nums[n-1];
8        for(int i=0;i<n;i++)
9        {
10            Max=max(nums[i],Max);
11            arr1[i]=Max;
12        }
13        for(int i=n-1;i>=0;i--)
14        {
15            Min=min(nums[i],Min);
16            arr2[i]=Min;
17
18        }
19        for(int i=0;i<n;i++)
20        {
21            if(arr1[i]-arr2[i]<=k)
22            {
23                return i;
24            }
25        }
26        return -1;
27    }
28};