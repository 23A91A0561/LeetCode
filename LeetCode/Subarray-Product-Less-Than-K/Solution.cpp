1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        if(k<=1)
5        {
6            return 0;
7        }
8        int product=1,l=0,ans=0;
9        for(int i=0;i<nums.size();i++)
10        {
11            product*=nums[i];
12            while(product>k-1)
13            {
14                product/=nums[l];
15                l++;
16            }
17            ans+=i-l+1;
18        }
19        return ans;
20    }
21};