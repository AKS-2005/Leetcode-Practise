class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(tasks.rbegin(), tasks.rend());
        sort(processorTime.begin(), processorTime.end());

        int n = tasks.size();
        int m = processorTime.size();

        vector<int> arr;

        for(int i = 0; i < n; i += 4) {
            int tt = tasks[i] + processorTime[i / 4];
            arr.push_back(tt);
        }

        sort(arr.rbegin(), arr.rend());

        return arr[0];
    }
};