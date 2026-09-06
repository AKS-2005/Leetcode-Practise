class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j) {
    int m = grid.size();
    int n = grid[0].size();

    if(i < 0 || i == m || j < 0 || j == n || grid[i][j] == 0)
        return 0;

    grid[i][j] = 0;

    return 1
        + dfs(grid, i - 1, j)
        + dfs(grid, i + 1, j)
        + dfs(grid, i, j - 1)
        + dfs(grid, i, j + 1);
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int mval=0;
        vector<vector<bool>> vis;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    mval=max(mval,dfs(grid,i,j));
                }
            }
        }
        return mval;
    }
};