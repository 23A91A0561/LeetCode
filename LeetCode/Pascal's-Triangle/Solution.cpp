1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4        vector<vector<int>>v={{1}};
5        for(int i=0;i<numRows-1;i++)
6        {
7            vector<int>temp=v.back();
8            temp.insert(temp.begin(),0);
9            temp.push_back(0);
10            vector<int>r;
11            for(int j=1;j<temp.size();j++)
12            {
13                r.push_back(temp[j]+temp[j-1]);
14            }
15            v.push_back(r);
16        }
17        return v;
18    }
19};