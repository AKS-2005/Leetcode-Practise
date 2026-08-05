class Solution {
public:
    int mirrorDistance(int n) {
        int a=0;
        int m=n;
        while(n>0){
            a = a * 10 + (n % 10);
            n /= 10;
        }
        return abs(a-m);
    }
};