class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int max=0;
        int alltm=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                max++;
                if(max>alltm){
                    alltm=max;
                }
            }
            else{
                max=0;
            }
        }
        return alltm;
    }
};