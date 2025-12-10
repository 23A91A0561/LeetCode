1class Solution {
2public:
3    long long removeZeros(long long n) {
4        string s=to_string(n);
5        string ans="";
6        for(auto &i:s)
7        {
8            if(i!='0')
9            {
10                ans+=i;
11            }
12        }
13        return stoll(ans);
14    }
15};