1class Solution {
2public:
3    vector<int> toggleLightBulbs(vector<int>& bulbs) {
4        map<int,int>m;
5        for(auto &i:bulbs)
6        {
7            m[i]++;
8        }
9        vector<int>ans;
10        for(auto &i:m)
11        {
12            if(i.second%2!=0)
13            {
14                ans.push_back(i.first);
15            }
16        }
17        return ans;
18    }
19};