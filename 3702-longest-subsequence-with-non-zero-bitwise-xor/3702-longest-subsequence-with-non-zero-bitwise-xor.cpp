class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xors=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            xors^=nums[i];
        }
        if (xors != 0)
            return n;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0)
                return n - 1;
        }
        return 0;
    }
};