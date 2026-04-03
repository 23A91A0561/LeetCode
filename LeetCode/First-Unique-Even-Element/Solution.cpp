1class Solution {
2public:
3    int firstUniqueEven(vector<int>& nums) {
4        map<int,int>m;
5        for(auto &i:nums)
6        {
7            m[i]++;
8        }
9        for(auto &i:nums)
10        {
11            if(i%2==0 && m[i]==1)
12            {
13                return i;
14            }
15        }
16        return -1;
17    }
18};