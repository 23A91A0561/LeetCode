1class Solution {
2public:
3    int binaryGap(int n) {
4        string s="";
5        while(n!=0)
6        {
7            s+=to_string(n%2);
8            n/=2;
9        }
10        reverse(s.begin(),s.end());
11        int ans=0;
12        for(int i=0;i<s.size()-1;i++)
13        {
14            for(int j=i+1;j<s.size();j++)
15            {
16                if(s[i]=='1' && s[j]=='1')
17                {
18                    ans=max(ans,j-i);
19                    break;
20                }
21            }
22        }
23        return ans;
24    }
25};