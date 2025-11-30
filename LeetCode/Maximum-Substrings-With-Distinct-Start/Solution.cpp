1class Solution {
2public:
3    int maxDistinct(string s) {
4        set<char>st;
5        for(auto &i:s)
6        {
7            st.insert(i);
8        }
9        return st.size();
10    }
11};