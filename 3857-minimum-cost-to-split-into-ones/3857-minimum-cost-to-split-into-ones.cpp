class Solution {
public:
    /*vector<int> dp;
    int solve(int n){
        if(n==1){
            return 0;
        }
        int ans = INT_MAX;
        if(dp[n]!=-1){
            return dp[n];
        }
        for(int i =1;i<n;i++){
            int b= n-i;
            ans = min(ans,i*b+solve(i)+solve(b));
        }
        return dp[n]=ans;
    }
    int minCost(int n) {
        dp.assign(n+1,-1);
        return solve(n);
    }*/
    int minCost(int n) {
        return n*(n-1)/2;
    }
};