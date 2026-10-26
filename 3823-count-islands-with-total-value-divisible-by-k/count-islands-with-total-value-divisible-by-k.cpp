class Solution {
public:
    long long check(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 || j<0 || j>=grid[0].size() || i>=grid.size() || grid[i][j]==0)
        {
            return 0;
        }
        long long val=grid[i][j];
        grid[i][j]=0;
        val+=check(grid,i+1,j);
        val+=check(grid,i-1,j);
        val+=check(grid,i,j+1);
        val+=check(grid,i,j-1);
        return val;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]!=0)
                {
                    if(check(grid,i,j)%k==0)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};