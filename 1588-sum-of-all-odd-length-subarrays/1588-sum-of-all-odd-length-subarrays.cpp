class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            int cnt=0;
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                cnt++;
                if(cnt%2==1){
                    ans+=sum;
                }
            }
        }
        return ans;
    }
};