1class Solution {
2public:
3    long long smallestNumber(long long num) {
4        string s;
5        if(num>=0)
6        {
7            s=to_string(num);
8            sort(s.begin(),s.end());
9            if(s[0]=='0')
10            {
11                for(int i=0;i<s.size();i++)
12                {
13                    if(s[i]!='0')
14                    {
15                        swap(s[i],s[0]);
16                        break;
17                    }
18                }
19            }
20        }
21        else
22        {
23            num=-1*num;
24            s=to_string(num);
25            sort(s.begin(),s.end());
26            s+='-';
27            reverse(s.begin(),s.end());
28        }
29        return stoll(s);
30    }
31};