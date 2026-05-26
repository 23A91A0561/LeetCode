1class Solution {
2public:
3    int numberOfSpecialChars(string word) {
4        map<char,int>m;
5        for(char i='a';i<='z';i++)
6        {
7            m[i]=0;
8        }
9        for(char i='A';i<='Z';i++)
10        {
11            m[i]=0;
12        }
13        for(auto &i:word)
14        {
15            m[i]++;
16        }
17        int c=0;
18        for(char i='a';i<='z';i++)
19        {
20            if(m[i]>0 && m[i-32]>0)
21            {
22                c++;
23            }
24        }
25        return c;
26    }
27};