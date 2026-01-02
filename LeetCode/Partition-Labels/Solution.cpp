1class Solution {
2public:
3    vector<int> partitionLabels(string s) {
4        map<char,pair<int,int>>m;
5        for(int i=0;i<s.size();i++)
6        {
7            if(m.find(s[i])==m.end())
8            {
9                m[s[i]]={i,i};
10            }
11            else
12            {   
13
14                m[s[i]].second=i;
15            }
16        }
17        unordered_set<char>st;
18        vector<char>v;
19        for(auto &i:s)
20        {
21            if(st.find(i)==st.end())
22            {
23                v.push_back(i);
24            }
25            st.insert(i);
26        }
27        vector<int>ans;
28        int i=0,j=0;
29        while(i!=v.size())
30        {
31            while(j<v.size() && m[v[i]].second>=m[v[j]].first)
32            {
33                m[v[i]].second=max(m[v[i]].second,m[v[j]].second);
34                j++;
35            }
36            ans.push_back(m[v[i]].second-m[v[i]].first+1);
37            i=j;
38            j++;
39        }
40        return ans;
41    }
42};