class Solution {
public:
    void rev(vector<int> &num,int st,int end){
        while(st<end){
            int temp=num[st];
            num[st]=num[end];
            num[end]=temp;
            st++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        rev(nums,0,nums.size()-1);
        rev(nums,0,k-1);
        rev(nums,k,nums.size()-1);
    }
};