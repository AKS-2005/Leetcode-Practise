class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        long long n=arr.size();
        vector<long long> dp(n+1,0);
        for(long long i=1;i<=n;i++){
            long long temp=0;
            long long mx=0;
            for(long long j=0;j<k;j++){
                if(i==j) break;
                temp=arr[i-j-1];
                mx=max(mx,(long long)arr[i-j-1]);
                dp[i]=max(dp[i],mx*(j+1)+dp[i-j-1]);
            }
        }
        return dp[n];
    }
};