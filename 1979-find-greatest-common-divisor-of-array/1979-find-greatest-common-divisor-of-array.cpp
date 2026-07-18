class Solution {
public:
    int gcd(int a,int b){
        while (b) {                             
            long long t = a % b;
            a = b;
            b = t;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums[n-1]);
    }
};