1class Solution {
2public:
3    int minimumDeletions(string s) {
4        stack<char>st;
5        int c=0;
6        for(int i=0;i<s.size();i++)
7        {
8            if(!st.empty() && s[i]=='a')
9            {
10                st.pop();
11                c++;
12            }
13            if(s[i]=='b')
14            {
15                st.push(s[i]);
16            }
17        }
18        return c;
19    }
20};