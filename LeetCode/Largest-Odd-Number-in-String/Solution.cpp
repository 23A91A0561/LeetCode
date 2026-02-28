1class Solution {
2public:
3    string largestOddNumber(string num) {
4        int best=-1;
5        for(int i=num.size()-1;i>=0;i--)
6        {
7            if((num[i]-'0')%2!=0)
8            {
9                cout <<best <<endl;
10                best=i;
11                break;
12            }
13        }
14        if(best==-1)
15        {
16            return "";
17        }
18        string ans="";
19        for(int i=0;i<=best;i++)
20        {
21            ans+=num[i];
22        }
23        return ans;
24    }
25};