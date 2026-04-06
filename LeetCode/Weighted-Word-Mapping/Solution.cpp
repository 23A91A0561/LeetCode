1class Solution {
2public:
3    string mapWordWeights(vector<string>& words, vector<int>& weights) {
4        string ans="";
5        for(auto &i:words)
6        {
7            int sum=0;
8            for(auto &j:i)
9            {
10                int idx=j-'a';
11                sum+=weights[idx];
12            }
13            ans+='z'-(sum%26);
14        }
15        return ans;
16    }
17};