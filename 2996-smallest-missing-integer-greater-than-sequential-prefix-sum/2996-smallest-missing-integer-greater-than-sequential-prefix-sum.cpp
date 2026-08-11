class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else{
                break;
            }
        }
        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        while (mp.find(sum) != mp.end()) {
            sum++;
        }
        return sum;
    }
};