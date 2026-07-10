class Solution {
public:
    bool dfs(int rl,int cl,vector<vector<char>>& board,string& word,vector<vector<int>>& path,int rp,int cp,int size)
    {
        if(size==word.size())
        {
            return true;
        }
        if(rp<0 || cp <0 || rp>=rl ||  cp>=cl || board[rp][cp]!=word[size] || path[rp][cp])
        {
            return false;
        }
        path[rp][cp]=1;
        bool res=(dfs(rl,cl,board,word,path,rp+1,cp,size+1) ||
                  dfs(rl,cl,board,word,path,rp,cp+1,size+1) ||
                  dfs(rl,cl,board,word,path,rp-1,cp,size+1) ||
                  dfs(rl,cl,board,word,path,rp,cp-1,size+1));
        path[rp][cp]=0;
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int row_length=board.size();
        int column_length=board[0].size();
        vector<vector<int>>path(row_length,vector<int>(column_length,0));
        for(int i=0;i<row_length;i++)
        {
            for(int j=0;j<column_length;j++)
            {
                if(dfs(row_length,column_length,board,word,path,i,j,0))
                {
                    return true;
                }
            }
        }
        return false;
    }
};