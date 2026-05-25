1class Solution {
2public:
3    int passwordStrength(string password) {
4        unordered_map<char,int>m;
5        int points=0;
6        for(auto &i:password)
7        {
8            if(m[i]==0)
9            {
10                if(i>='a' && i<='z')
11                {
12                    points+=1;
13                }
14                else if(i>='A' && i<='Z')
15                {
16                    points+=2;
17                }
18                else if(i>='0' && i<='9')
19                {
20                    points+=3;
21                }
22                else
23                {
24                    points+=5;
25                }
26                m[i]++;
27            }
28        }
29        return points;
30    }
31};