class Solution {
public:
    int prod(int n){
        int p=1;
        while(n>0){
            int d=n%10;
            p*=d;
            n/=10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        while(prod(n)%t!=0){
            n++;
        }
        return n;
    }
};