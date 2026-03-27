1class Solution {
2public:
3    bool areSimilar(vector<vector<int>>& mat, int k) {
4        int n=mat.size();
5        int m=mat[0].size();
6        vector<vector<int>>temp=mat;
7        for(auto &i:mat)
8        {
9            rotate(i.begin(),i.begin()+(k%m),i.end());
10        }
11        if(mat==temp)
12        {
13            return true;
14        }
15        return false;
16    }
17};