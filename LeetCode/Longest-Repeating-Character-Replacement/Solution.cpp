1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        int l=0;
5        map<char,int>m;
6        int ans=0;
7        int maxf=0;
8        for(int i=0;i<s.size();i++)
9        {
10            m[s[i]]++;
11            maxf=max(m[s[i]],maxf);
12            while(i-l+1-maxf>k)
13            {
14                m[s[l]]--;
15                l++;
16            }
17            ans=max(ans,i-l+1);
18        }
19        return ans;
20    }
21};