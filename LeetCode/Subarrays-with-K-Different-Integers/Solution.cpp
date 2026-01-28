1class Solution {
2public:
3    int check(vector<int>& nums,int k)
4    {
5        int l=0;
6        map<int,int>m;
7        int ans=0;
8        for(int i=0;i<nums.size();i++)
9        {
10            m[nums[i]]++;
11            while(m.size()>k)
12            {
13                m[nums[l]]--;
14                if(m[nums[l]]==0)
15                {
16                    m.erase(nums[l]);
17                }
18                l++;
19            }
20            ans+=i-l+1;
21        }
22        return ans;
23    }
24    int subarraysWithKDistinct(vector<int>& nums, int k) {
25        return check(nums,k)-check(nums,k-1);
26    }
27};