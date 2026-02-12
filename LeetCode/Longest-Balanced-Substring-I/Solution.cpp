1class Solution {
2public:
3    int longestBalanced(string s) {
4        int ans=0;
5        for(int i=0;i<s.size();i++)
6        {
7            map<char,int>m;
8            for(int j=i;j<s.size();j++)
9            {
10                m[s[j]]++;
11                int Min=INT_MAX,Max=INT_MIN;
12                for(auto &k:m)
13                {
14                    Max=max(k.second,Max);
15                    Min=min(k.second,Min);
16                }
17                if(Min==Max)
18                {
19                    ans=max(ans,j-i+1);
20                }
21            }
22        }
23        return ans;
24    }
25};