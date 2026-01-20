1class Solution {
2public:
3    int countKConstraintSubstrings(string s, int k) {
4        int l=0;
5        int ans=0,one=0,zero=0;
6        for(int i=0;i<s.size();i++)
7        {
8            if(s[i]=='1')
9            {
10                one++;
11            }
12            if(s[i]=='0')
13            {
14                zero++;
15            }
16            while(one>k && zero>k)
17            {
18                if(s[l]=='0')
19                {
20                    zero--;
21                }
22                else{
23                    one--;
24                }
25                l++;
26            }
27            ans+=i-l+1;
28        }
29        return ans;
30    }
31};