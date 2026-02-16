1class Solution {
2public:
3    vector<string>ans;
4    void rec(string s,int n)
5    {
6        if(s.size()==n)
7        {
8            ans.push_back(s);
9            return;
10        }
11        if(s[s.size()-1]=='0')
12        {
13            rec(s+'1',n);
14        }
15        else
16        {
17            rec(s+'0',n);
18            rec(s+'1',n);
19        }
20    }
21    vector<string> validStrings(int n) {
22        rec("1",n);
23        rec("0",n);
24        return ans;
25    }
26};