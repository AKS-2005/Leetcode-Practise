class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> fq;
        int maxl=0;
        int l=0;
        for(int i=0;i<nums.size();i++){
            fq[nums[i]]++;
            while(fq[nums[i]]>k){
                fq[nums[l]]--;
                l++;
            }
            maxl=max(maxl,i-l+1);
        }
        return maxl;
    }
};