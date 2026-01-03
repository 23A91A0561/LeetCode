1class NumMatrix {
2public:
3    vector<vector<int>>mat;
4    NumMatrix(vector<vector<int>>& matrix) {
5        for(int i=0;i<matrix.size();i++)
6        {
7            for(int j=1;j<matrix[i].size();j++)
8            {
9                matrix[i][j]=matrix[i][j-1]+matrix[i][j];
10            }
11        }
12        mat=matrix;
13    }
14    
15    int sumRegion(int row1, int col1, int row2, int col2) {
16        int sum=0;
17        for(int i=row1;i<=row2;i++)
18        {
19            
20            if(col1==0)
21            {
22                sum+=mat[i][col2];
23            }
24            else
25            {
26                sum+=mat[i][col2]-mat[i][col1-1];
27            }
28        }
29        return sum;
30    }
31};
32
33/**
34 * Your NumMatrix object will be instantiated and called as such:
35 * NumMatrix* obj = new NumMatrix(matrix);
36 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
37 */