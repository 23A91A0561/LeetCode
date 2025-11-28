1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int,int>m;
5        for(auto &i:nums)
6        {
7            m[i]++;
8        }
9        vector<pair<int,int>>p;
10        for(auto &i:m)
11        {
12            p.push_back({i.first,i.second});
13        }
14        sort(p.begin(),p.end(),[](auto a,auto b){
15            if(a.second==b.second)
16            {
17                return a.first<b.first;
18            }
19            return a.second>b.second;
20        });
21        vector<int>v;
22        int ct=0;
23        for(int i=0;i<k;i++)
24        {
25            v.push_back(p[i].first);
26        }
27        return v;
28    }
29};