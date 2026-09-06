class Solution {
public:
    int f(int i,int j,vector<int>& cut,vector<vector<int>>& dp){
        if(i>j) return 0;
        int mini=INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        for(int ind=i;ind<=j;ind++){
            int cost=cut[j+1]-cut[i-1]+f(i,ind-1,cut,dp)+f(ind+1,j,cut,dp);
            mini=min(mini,cost);
        }
        return dp[i][j]=mini;

    }
    int minCost(int n, vector<int>& cut) {
        int j=cut.size();
        cut.push_back(n);
        cut.insert(cut.begin(),0);
        sort(cut.begin(),cut.end());
        vector<vector<int>> dp(j+1,vector<int>(j+1,-1));
        return f(1,j,cut,dp);
    }
};