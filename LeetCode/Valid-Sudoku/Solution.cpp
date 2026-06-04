1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        vector<unordered_set<char>>row(9);
5        vector<unordered_set<char>>column(9);
6        vector<vector<unordered_set<char>>>box(3,vector<unordered_set<char>>(3));
7        for(int i=0;i<9;i++)
8        {
9            for(int j=0;j<9;j++)
10            {
11                if(board[i][j]=='.')
12                {
13                    continue;
14                }
15                if(row[i].find(board[i][j])!=row[i].end())
16                {
17                    return false;
18                }
19                row[i].insert(board[i][j]);
20                if(column[j].find(board[i][j])!=column[j].end())
21                {
22                    return false;
23                }
24                column[j].insert(board[i][j]);
25                int b_row=i/3;
26                int b_column=j/3;
27                if(box[b_row][b_column].find(board[i][j])!=box[b_row][b_column].end())
28                {
29                    return false;
30                }
31                box[b_row][b_column].insert(board[i][j]);
32            }
33        }
34        return true;
35    }
36};