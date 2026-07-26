class Solution {
public:
void countingsort(vector<int>&nums,int exp){
    int n=nums.size();
    vector<int>output(n,0);
    int count[10]={0};
    for(int i=0;i<n;i++){
        count[(nums[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        int digit=(nums[i]/exp)%10;
        output[count[digit]-1]=nums[i];
        count[digit]--;
    }
    for(int i=0;i<n;i++){
        nums[i]=output[i];
    }
}
   void radixSort(vector<int>& arr) {
        if (arr.empty()) return;
        int mx = *max_element(arr.begin(), arr.end());

        for (int exp = 1; mx / exp > 0; exp *= 10)
            countingsort(arr, exp);
    }
    vector<int> sortArray(vector<int>& nums) {
           vector<int> neg, pos;
        for (int x : nums) {
            if (x < 0)
                neg.push_back(-x); 
            else
                pos.push_back(x);
        }
        radixSort(neg);
        radixSort(pos);
        vector<int> ans;
        for (int i = neg.size() - 1; i >= 0; i--)
            ans.push_back(-neg[i]);
        for (int x : pos)
            ans.push_back(x);

        return ans;
    }
};