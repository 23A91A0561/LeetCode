1class Solution {
2public:
3    int minLength(vector<int>& nums, int k) {
4        int l=0;
5        unordered_map<int,int>m;
6        int ans=INT_MAX;
7        int sum=0;
8        for(int i=0;i<nums.size();i++)
9        {
10            if(m.find(nums[i])==m.end())
11            {
12                sum+=nums[i];
13            }
14            m[nums[i]]++;
15            while(sum>=k)
16            {
17                ans=min(ans,i-l+1);
18                m[nums[l]]--;
19                if(m[nums[l]]==0)
20                {
21                    m.erase(nums[l]);
22                    sum-=nums[l];
23                }
24                l++;
25            }
26        }
27        if(ans==INT_MAX)
28        {
29            return -1;
30        }
31        return ans;
32    }
33};