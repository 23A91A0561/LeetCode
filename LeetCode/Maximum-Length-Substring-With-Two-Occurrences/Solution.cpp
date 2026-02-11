1class Solution {
2public:
3    int maximumLengthSubstring(string s) {
4        int l=0;
5        int ans=INT_MIN;
6        map<char,int>m;
7        for(int i=0;i<s.size();i++)
8        {
9            m[s[i]]++;
10            while(m[s[i]]>2)
11            {
12                m[s[l]]--;
13                if(m[s[l]]==0)
14                {
15                    m.erase(s[l]);
16                }
17                l++;
18            }
19            ans=max(ans,i-l+1);
20        }
21        return ans;
22    }
23};