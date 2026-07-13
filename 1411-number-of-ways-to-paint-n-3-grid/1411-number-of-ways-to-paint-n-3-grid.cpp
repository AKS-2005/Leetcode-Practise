class Solution {
public:
    int numOfWays(int n) {
        long long mod=1000000007;
        vector<long long int> a(n,6),b(n,6);    // A and B represent transition states where A for 2 colour and B for 3 colour
        int tot = 0;
        for(int i=1;i<n;i++){
            a[i] = (2*a[i-1] + 2*b[i-1]) % mod;    // 2 and 2
            b[i] = (2*a[i-1] + 3*b[i-1]) % mod;    // 2 and 3 states 
        }
        return (a[n-1] + b[n-1]) % mod;

        // can go in A -- no of ways to select colour 1= 3 and colour 2 = 2 and no third colour 
        // for B colour to select are 3 all distinct so 3*2*1=6 
        // hence a and b are 6,6 
        // for loop shows --> Transition states
    }
};