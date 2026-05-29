1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        map<int,int>m;
5        int flag=0;
6        long long sum=0;
7        for(int i=0;i<k;i++)
8        {
9            sum+=nums[i];
10            m[nums[i]]++;
11            if(m[nums[i]]>1)
12            {
13                flag=1;
14            }
15        }
16        long long ans=0;
17        if(!flag)
18        {
19            ans=sum;
20        }
21        for(int i=k;i<nums.size();i++)
22        {
23            sum+=nums[i];
24            m[nums[i]]++;
25            sum-=nums[i-k]; 
26            m[nums[i-k]]--;
27            if(m[nums[i-k]]==0)
28            {
29                m.erase(nums[i-k]);
30            }
31            if(m.size()<k)
32            {
33                continue;
34            }
35            
36            ans=max(ans,sum);
37        }
38        return ans;
39    }
40};