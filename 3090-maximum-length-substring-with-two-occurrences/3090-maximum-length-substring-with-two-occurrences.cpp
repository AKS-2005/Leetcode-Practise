class Solution {
public:
    int maximumLengthSubstring(string nums) {
        unordered_map<int,int> fq;
        int maxl=0;
        int l=0;
        for(int i=0;i<nums.size();i++){
            fq[nums[i]]++;
            while(fq[nums[i]]>2){
                fq[nums[l]]--;
                l++;
            }
            maxl=max(maxl,i-l+1);
        }
        return maxl;
    }
    
};