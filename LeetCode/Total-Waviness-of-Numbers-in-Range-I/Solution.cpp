1class Solution {
2public:
3    int check(int a)
4    {
5        string s=to_string(a);
6        int c=0;
7        for(int i=1;i<s.size()-1;i++)
8        {
9            if((s[i-1]>s[i] && s[i+1]>s[i]) || (s[i-1]<s[i] && s[i+1]<s[i]))
10            {
11                c++;
12            }
13        }
14        return c;
15    } 
16    int totalWaviness(int num1, int num2) {
17        int c=0;
18        for(int i=num1;i<=num2;i++)
19        {
20            if(i>99)
21            {
22                c+=check(i);
23            }
24        }
25        return c;
26    }
27};