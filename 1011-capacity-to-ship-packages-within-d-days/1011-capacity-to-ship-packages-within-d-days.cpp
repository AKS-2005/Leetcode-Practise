class Solution {
public:
    int findDays(const std::vector<int>& weights, int cap) {
        int days = 1;
        int load = 0;
        for (int weight : weights) {
            if (load + weight > cap) {
                days++;
                load = weight; 
            } 
            else {
                load += weight;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int mw = 0;
        for(int w : weights) {
            mw = max(mw, w);
        }
        int ss=0;
        for(int i=0;i<weights.size();i++){
            ss+=weights[i];
        }
        int low = mw;
        int high = ss;
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (findDays(weights, mid) <= days) {
                ans = mid;       
                high = mid - 1;
            } else {
                low = mid + 1;   
            }
        }
        return ans;
    }
};