class Solution {
public:
    long long gcd(long long a, long long b) {     // gcd func 
        while (b) {                             
            long long t = a % b;
            a = b;
            b = t;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixGcd(n);
        int mx = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            prefixGcd[i] = gcd(nums[i], mx);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long gsum = 0;
        int l = 0, r = n - 1;
        while (l < r) {
            gsum += gcd(prefixGcd[l], prefixGcd[r]);
            l++;
            r--;
        }
        return gsum;
    }
};