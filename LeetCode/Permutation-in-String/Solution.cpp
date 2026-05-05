1class Solution {
2public:
3    bool check(vector<int>& f1,vector<int>& f2)
4    {
5        for(int i=0;i<f1.size();i++)
6        {
7            if(f1[i]!=f2[i])
8            {
9                return false;
10            }
11        }
12        return true;
13    }
14    bool checkInclusion(string s1, string s2) {
15        int l=0;
16        vector<int>freq1(26,0),freq2(26,0);
17        for(auto &i:s1)
18        {
19            freq1[i-'a']++;
20        }
21        for(int i=0;i<s2.size();i++)
22        {
23            freq2[s2[i]-'a']++;
24            if(i-l+1>s1.size())
25            {
26                freq2[s2[l]-'a']--;
27                l++;
28            }
29            if(check(freq1,freq2))
30            {
31                return true;
32            }
33        }
34        return false;
35    }
36};