1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        int l=0;
5        int pro=1,ans=0;
6        for(int i=0;i<nums.size();i++)
7        {
8            pro*=nums[i];
9            while(l<i && pro>=k)
10            {
11                pro/=nums[l];
12                l++;
13            }
14           if(pro<k) ans+=i-l+1;
15        }
16        return ans;
17    }
18};