class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int total_g=0;
        int total_c=0;
        int curr_g=0;
        int s_p=0;
        for(int i=0;i<n;i++){
            total_g+=gas[i];
            total_c+=cost[i];
            curr_g+=gas[i]-cost[i];
            if(curr_g<0){
                s_p=i+1;
                curr_g=0;
            }
        }
        if(total_g<total_c){
            return -1;
        }
        return s_p;
    }
};