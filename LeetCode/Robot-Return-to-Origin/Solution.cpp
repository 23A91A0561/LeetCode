1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        map<char,int>m;
5        for(auto &i:moves)
6        {
7            m[i]++;
8        }
9        if(m['U']!=m['D'] || m['L']!=m['R'])
10        {
11            return false;
12        }
13        return true;
14    }
15};