1class Solution {
2public:
3    int minOperations(string s) {
4        int f=0,se=0;
5        for(int i=0;i<s.size();i++)
6        {
7            if(i%2==0)
8            {
9                if(s[i]!='0')
10                {
11                    f++;
12                }
13                else
14                {
15                    se++;
16                }
17            }
18            else
19            {
20                if(s[i]!='1')
21                {
22                    f++;
23                }
24                else
25                {
26                    se++;
27                }
28            }
29        }
30        return min(f,se);
31    }
32};