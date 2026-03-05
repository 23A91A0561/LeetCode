1class Solution {
2public:
3    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
4        int idx=nums.size();
5        int Min=INT_MAX;
6        int Max=INT_MAX;
7        long long ans=0;
8        for(int i=nums.size()-1;i>=0;i--)
9        {
10            if(nums[i]>maxK || nums[i]<minK)
11            {
12                idx=i;
13                Min=INT_MAX;
14                Max=INT_MAX;
15            }
16            if(nums[i]==minK)
17            {
18                Min=i;
19            }
20            if(nums[i]==maxK)
21            {
22                Max=i;
23            }
24            if(Max!=INT_MAX && Min!=INT_MAX)
25            {
26                ans+=idx-max(Max,Min);
27            }
28        }
29        return ans;
30    }
31};