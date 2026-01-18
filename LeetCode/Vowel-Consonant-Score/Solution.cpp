1class Solution {
2public:
3    int vowelConsonantScore(string s) {
4        int v=0,c=0;
5        for(auto &i:s)
6        {
7            if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u')
8            {
9                v++;
10            }
11            else if(i!=' ' && i>'9')
12            {
13                c++;
14            }
15        }
16        if(c>0)
17        {
18            return floor(v/c);
19        }
20        return 0;
21    }
22};