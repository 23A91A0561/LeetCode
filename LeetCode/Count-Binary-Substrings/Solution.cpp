1class Solution {
2public:
3    int countBinarySubstrings(string s) {
4        int ans=0,cur=1;
5        int pre=0;
6        for(int i=1;i<s.size();i++)
7        {
8            if(s[i]==s[i-1])
9            {
10                cur++;
11            }
12            else
13            {
14                ans+=min(cur,pre);
15                pre=cur;
16                cur=1;
17            }
18        }
19        ans+=min(cur,pre);
20        return ans;
21    }
22};