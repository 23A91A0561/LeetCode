1class Solution {
2public:
3    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
4        for(int i=x;i<x+k/2;i++)
5        {
6            for(int j=y;j<y+k;j++)
7            {
8                swap(grid[i][j],grid[x+k-1-(i-x)][j]);
9            }
10        }
11        return grid;
12    }
13};