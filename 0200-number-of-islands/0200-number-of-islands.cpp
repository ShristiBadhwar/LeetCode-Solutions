class Solution {
    void delIsland(vector<vector<char>>& grid, int m, int n, int i, int j)
    {
        if((i>=0 && i<m) && (j>=0 && j<n) && grid[i][j]=='1'  )
        {
            grid[i][j]='0';
           // delIsland(grid,m,n,i-1,j-1);
            delIsland(grid,m,n,i-1,j);
            //delIsland(grid,m,n,i-1,j+1);
            delIsland(grid,m,n,i,j+1);
            //delIsland(grid,m,n,i+1,j+1);
            delIsland(grid,m,n,i+1,j);
            //delIsland(grid,m,n,i+1,j-1);
            delIsland(grid,m,n,i,j-1);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m=grid.size(), n=grid[0].size();
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    delIsland(grid,m,n,i,j);
                }
            }
        }
        return count;
    }
};