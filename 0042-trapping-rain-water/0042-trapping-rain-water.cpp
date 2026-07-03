class Solution {
public:
    int trap(vector<int>& arr) {
        int l=0;
        int r=arr.size()-1;
        int lm=arr[l];
        int rm=arr[r];
        int wt=0;
        while(l<r){
            if(lm<rm){
                l++;
                lm=max(lm,arr[l]);
                wt+=lm-arr[l];
            }
            else{
                r--;
                rm=max(rm,arr[r]);
                wt+=rm-arr[r];
            }
        }
        return wt;
    }
};