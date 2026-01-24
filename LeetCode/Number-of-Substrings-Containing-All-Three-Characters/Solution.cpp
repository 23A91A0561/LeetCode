1class Solution {
2public:
3    int numberOfSubstrings(string s) {
4        int l=0;
5        map<char,int>m;
6        int ans=0;
7        int n=s.size();
8        for(int i=0;i<s.size();i++)
9        {
10            m[s[i]]++;
11            while(m.size()==3)
12            {
13                ans+=n-i;
14                m[s[l]]--;
15                if(m[s[l]]==0)
16                {
17                    m.erase(s[l]);
18                }
19                l++;
20            }
21            
22        }
23         return ans;
24    }  
25};