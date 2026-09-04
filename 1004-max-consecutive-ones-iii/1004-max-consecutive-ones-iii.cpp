class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        /*int left = 0, maxLength = 0, zeroCount = 0;

        for (int right = 0; right < nums.size(); ++right) {
            if (nums[right] == 0) {
                zeroCount++;
            }
            while (zeroCount > k) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;*/
        int l=0;
        int ml=0;
        int zc=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0) zc++;
            while(zc>k){
                if(nums[l]==0) zc--;
                l++;
            }
            ml=max(ml,i-l+1);
        }
        return ml;
    }
};