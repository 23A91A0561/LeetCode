1class Solution {
2public:
3    string sortVowels(string s) {
4        map<char,int>m;
5        unordered_map<char,int>id;
6        vector<char>v;
7        for(int i=0;i<s.size();i++)
8        {
9            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
10            {
11                m[s[i]]++;
12                if(id.find(s[i])==id.end())
13                {
14                    id[s[i]]=i;
15                }
16                else
17                {
18                    id[s[i]]=min(id[s[i]],i);
19                }
20                v.push_back(s[i]);
21            }
22        }
23        sort(v.begin(),v.end(),[&](auto a,auto b){
24            if(m[a]==m[b])
25            {
26                return id[a]<id[b];
27            }
28            return m[a]>m[b];
29        });
30        int j=0;
31        for(auto &i:s)
32        {
33            if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u')
34            {
35                i=v[j];
36                j++;
37            }
38        }
39        return s;
40    }
41};