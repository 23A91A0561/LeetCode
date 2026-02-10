1class Solution {
2public:
3    int reverseBits(int n) {
4        int ans=0;
5        string s=bitset<32>(n).to_string();
6        
7        for(int i=0;i<s.size();i++)
8        {
9            ans+=(s[i]-'0')*pow(2,i);
10        }
11        return ans;
12    }
13};