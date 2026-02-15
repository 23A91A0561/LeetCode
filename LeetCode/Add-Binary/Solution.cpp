1class Solution {
2public:
3    string addBinary(string a, string b) {
4        string ans="";
5        int i=a.size()-1,j=b.size()-1;
6        int c=0;
7        while(i>=0 || j>=0 || c)
8        {
9            int sum=c;
10            if(i>=0)
11            {
12                sum+=a[i--]-'0';
13            }
14            if(j>=0)
15            {
16                sum+=b[j--]-'0';
17            }
18            ans+=(sum%2)+'0';
19            c=sum/2;
20        }
21        reverse(ans.begin(),ans.end());
22        return ans;
23    }
24};