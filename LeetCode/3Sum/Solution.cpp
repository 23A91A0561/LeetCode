1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        set<vector<int>>s;
6        int n=nums.size();
7        for(int i=0;i<n-2;i++)
8        {
9            for(int j=i+1;j<n-1;j++)
10            {
11                int required = 0 - (nums[i] + nums[j]);
12                int l=j+1,h=n-1;
13                int ans;
14                while(l<=h)
15                {
16                    int m=(l+h)/2;
17                    if(nums[m]<required)
18                    {
19                        l=m+1;
20                    }
21                    else if(nums[m]>required)
22                    {
23                        h=m-1;
24                    }
25                    else
26                    {
27                        ans=nums[m];
28                        s.insert({nums[i],nums[j],ans});        
29                        break;
30                    }
31                }
32            }
33        }
34        vector<vector<int>>v;
35        for(auto &i:s)
36        {
37            v.push_back(i);
38        }
39        return v;
40    }
41};