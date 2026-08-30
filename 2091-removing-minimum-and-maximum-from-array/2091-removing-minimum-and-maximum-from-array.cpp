class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        if(nums.size()==1){
            return 1;
        }
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        int n=temp.size();
        int mx=temp[n - 1];
        int ans=0;
        int mn=temp[0];
        int a = -1, b = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == mn)
                a = i;

            if (nums[i] == mx)
                b = i;
        }
        if (a > b)
            swap(a, b);
        int option1 = b + 1;          
        int option2 = n - a;          
        int option3 = a + 1 + n - b;  
        return min({option1, option2, option3});
    }
};