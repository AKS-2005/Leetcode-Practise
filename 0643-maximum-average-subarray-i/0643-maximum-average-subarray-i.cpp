class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int l = 0;
        int r = k - 1;
        int sum = 0;
        for (int i = l; i <= r; i++) {
            sum += nums[i];
        }
        int maxSum = sum;
        while (r < n - 1) {
            sum -= nums[l];
            l++;
            r++;
            sum += nums[r];
            maxSum = max(maxSum, sum);
        }
        return (double)maxSum / k;
    }
};