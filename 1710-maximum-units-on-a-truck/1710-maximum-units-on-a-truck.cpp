class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(), boxTypes.end(), cmp);

        int ans = 0;

        for (auto &box : boxTypes) {
            if (truckSize == 0) break;

            int take = min(box[0], truckSize);
            ans += take * box[1];
            truckSize -= take;
        }

        return ans;
    }
};