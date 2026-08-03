class Solution {
public:
    int check(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 || i==grid.size() || j<0 || j==grid[0].size() || grid[i][j]==0)
        {
            return 1;
        }
        if(grid[i][j]==-1)
        {
            return 0;
        }
        grid[i][j]=-1;
        return (check(grid,i+1,j)+check(grid,i-1,j)+check(grid,i,j-1)+check(grid,i,j+1));
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    ans=max(ans,check(grid,i,j));
                }
            }
        }
        return ans;
    }
};