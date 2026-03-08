1class Solution {
2public:
3    vector<string>v;
4    void generate(string s,int n)
5    {
6        if(s.size()==n)
7        {
8            v.push_back(s);
9            return;
10        }
11        generate(s+"0",n);
12        generate(s+'1',n);
13    }
14    string findDifferentBinaryString(vector<string>& nums) {
15        string s="";
16        generate(s,nums.size());
17        set<string>st;
18        for(auto &i:nums)
19        {
20            st.insert(i);
21        }
22        for(auto &i:v)
23        {
24            if(st.find(i)==st.end())
25            {
26                return i;
27            }
28        }
29        return "101";
30    }
31};