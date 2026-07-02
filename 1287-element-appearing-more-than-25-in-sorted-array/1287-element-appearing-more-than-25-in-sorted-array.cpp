class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        /*unordered_map<int,int> fq;
        int n=arr.size();
        for(auto it:arr){
            fq[it]++;
        }
        int thresh=n/4;
        for(auto it:fq){
            if(it.second>thresh){
                return it.first;
            }
        }
        return -1;*/
        int n=arr.size();
        int l=0;
        for(int r=0;r<n;r++){
            while(arr[l]!=arr[r]){
                l++;
            }
            if(r-l+1>n/4){
                return arr[r];
            }
        }
        return -1;   
    }
};