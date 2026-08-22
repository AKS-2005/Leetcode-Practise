class Solution {
public:
    bool checkDivisibility(int n) {
        int digisum=0;
        int digiprod=1;
        int t=n;
        while(n>0){
            int digi=n%10;
            digisum+=digi;
            digiprod*=digi;
            n=n/10;
        }
        int check=digisum+digiprod;
        if(t%(digisum+digiprod)==0){
            return true;
        }
        else{
            return false;
        }
    }
};