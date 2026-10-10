class Solution {
public:
    string toHex(int num) {
        string ans = "";
        string hex="0123456789abcdef";
        if (num == 0) return "0";
        while(num!=0 && ans.size()<8){
            int rem=num &15;
            ans+=hex[rem];
            num=(unsigned int) num>>4;
        
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};