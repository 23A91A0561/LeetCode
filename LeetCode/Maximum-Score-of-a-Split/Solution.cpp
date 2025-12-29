1class Solution {
2public:
3    long long maximumScore(vector<int>& nums) {
4        vector<long long>prefix(nums.size());
5        vector<int>suffix(nums.size());
6        int n=nums.size();
7        prefix[0]=nums[0];
8        for(int i=1;i<nums.size();i++)
9        {
10            prefix[i]=nums[i]+prefix[i-1];
11        }
12        suffix[n-1]=nums[n-1];
13        for(int i=nums.size()-2;i>=0;i--)
14        {
15            suffix[i]=min(suffix[i+1],nums[i]);
16        }
17        suffix[0]=suffix[1];
18        long long ans=INT_MIN;
19        for(int i=0;i<n-1;i++)
20        {
21            ans=max(prefix[i]-suffix[i+1],ans);
22        }
23        return ans;
24    }
25};