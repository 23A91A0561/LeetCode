1class Solution {
2public:
3    bool validDigit(int n, int x) {
4        string s=to_string(n);
5        if(s[0]-'0'==x)
6        {
7            return false;
8        }
9        for(auto &i:s)
10        {
11            if(i-'0'==x)
12            {
13                return true;
14            }
15        }
16        return false;
17    }
18};