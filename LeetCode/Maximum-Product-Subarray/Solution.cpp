1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int Min=nums[0],Max=nums[0];
5        int ans=nums[0];
6        for(int i=1;i<nums.size();i++)
7        {
8            int temp=Max*nums[i];
9            Max=max(temp,max(Min*nums[i],nums[i]));
10            Min=min(temp,min(Min*nums[i],nums[i]));
11            ans=max(Max,ans);
12        }
13        return ans;
14    }
15};