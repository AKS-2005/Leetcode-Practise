class Solution {
public:
    int maxProduct(int n) {
        int first=0;
        int second=0;
        while(n>0){
            int digi=n%10;
            if(digi>first){
                second=first;
                first=digi;
            }
            else if(digi>second){
                second=digi;
            }
            n/=10;
        }
        return first*second;
    }
};