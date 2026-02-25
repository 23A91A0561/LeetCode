1class Solution {
2public:
3    vector<int> sortByBits(vector<int>& arr) {
4        vector<pair<int,int>>v;
5        for(auto &i:arr)
6        {
7            v.push_back({i,__builtin_popcount(i)});
8        }
9        sort(v.begin(),v.end(),[](auto a,auto b){
10            if(a.second==b.second)
11            {
12                return a.first<b.first;
13            }
14            return a.second<b.second;
15        });
16        vector<int>ans;
17        for(auto &i:v)
18        {
19            ans.push_back(i.first);
20        }
21        return ans;
22    }
23};