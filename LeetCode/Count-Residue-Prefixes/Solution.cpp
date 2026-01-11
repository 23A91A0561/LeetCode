1class Solution {
2public:
3    int residuePrefixes(string s) {
4        map<char,int>m;
5        int length=0;
6        int c=0;
7        for(auto &i:s)
8        {
9            m[i]++;
10            length++;
11            if(m.size()==length%3)
12            {
13                c++;
14            }
15        }
16        return c;
17    }
18};