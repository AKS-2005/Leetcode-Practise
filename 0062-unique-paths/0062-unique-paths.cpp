class Solution {
public:
    vector<vector<int>> dp;;
    int fun(int i,int j,int n,int m){
        if(i==n-1 && j==m-1){
            return 1;
        }
        if(i<0 || i>=n || j<0 || j>=m ){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        return dp[i][j]=fun(i+1,j,n,m)+fun(i,j+1,n,m);
    }
    int uniquePaths(int m, int n) {
        dp.assign(n, vector<int>(m, -1));
        return fun(0, 0, n, m);
    }
};