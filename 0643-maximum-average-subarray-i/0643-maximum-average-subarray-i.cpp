class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int csum=0;
        for(int i=0;i<k;i++){
            csum+=nums[i];
        }
        int msum=csum;
        for(int i=k;i<n;i++){
            csum+=nums[i]-nums[i-k];
            msum=max(msum,csum);
        }
        return(double) msum/k;
    }
};