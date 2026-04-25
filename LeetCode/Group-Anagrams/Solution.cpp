1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        map<vector<int>,vector<string>>m;
5        for(auto &i:strs)
6        {
7            vector<int>count(26,0);
8            for(auto &j:i)
9            {
10                count[j-'a']++;
11            }
12            m[count].push_back(i);
13        }
14        vector<vector<string>>ans;
15        for(auto &i:m)
16        {
17            ans.push_back(i.second);
18        }
19        return ans;
20    }
21};