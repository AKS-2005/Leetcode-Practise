class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        map<int, int> mp;

        // Store frequency of each number
        for (int x : nums) {
            mp[x]++;
        }

        int deletions = 0;

        // map is automatically sorted by key
        for (auto [x, freq] : mp) {

            bool valid = true;

            // Check whether x divides every element
            // in numsDivide
            for (int y : numsDivide) {
                if (y % x != 0) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                return deletions;

            // All occurrences of x have to be deleted
            deletions += freq;
        }

        return -1;
    }
};