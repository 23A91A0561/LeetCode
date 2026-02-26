1class Solution {
2public:
3    string check(string s)
4    {
5        int carry=1;
6        string ans="";
7        reverse(s.begin(),s.end());
8        for(auto &i:s)
9        {
10            if(carry==1)
11            {
12                if(i=='1')
13                {
14                    ans+='0';
15                }
16                else
17                {
18                    ans+='1';
19                    carry=0;
20                }
21            }
22            else
23            {
24                ans+=i;
25            }
26        }
27        if(carry==1)
28        {
29            ans+='1';
30        }
31        reverse(ans.begin(),ans.end());
32        return ans;
33    }
34    int numSteps(string s) {
35        int ans=0;
36        while(s.size()!=1)
37        {
38            if(s[s.size()-1]=='1')
39            {
40                s=check(s);
41                ans++;
42            }
43            s.pop_back();
44            ans++;
45        }
46        return ans;
47    }
48};