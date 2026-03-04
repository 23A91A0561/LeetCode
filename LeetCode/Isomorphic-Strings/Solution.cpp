1class Solution {
2    unordered_map<char,char>mp,m;
3public:
4    bool isIsomorphic(string s, string t)
5    {
6        for(int i=0;i<s.size();i++)
7        {
8           if(mp.find(s[i])==mp.end())
9           {
10            mp[s[i]]=t[i];
11           }
12           else if(mp[s[i]]!=t[i])
13           {
14            return false;
15           }
16           if(m.find(t[i])==m.end())
17           {
18             m[t[i]]=s[i];
19           }
20           else if(m[t[i]]!=s[i])
21           {
22            return false;
23           }
24        }
25        return true;
26        
27    }
28};