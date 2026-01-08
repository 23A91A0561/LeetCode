1class Solution {
2public:
3    vector<int> singleNumber(vector<int>& nums) {
4        map<int,int>m;
5        vector<int>ans;
6        for(auto &i:nums)
7        {
8            m[i]++;
9        }
10        for(auto &i:m)
11        {
12            if(i.second==1)
13            {
14                 ans.push_back(i.first);
15            }
16        }
17        return ans;
18    }
19};