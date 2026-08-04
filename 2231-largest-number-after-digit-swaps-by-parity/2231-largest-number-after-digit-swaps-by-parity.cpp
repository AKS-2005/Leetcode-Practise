class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> odd;
        priority_queue<int> even;
        vector<int> digits;
        int x = num;
        while (x > 0) {
            int d = x % 10;
            digits.push_back(d);

            if (d % 2)
                odd.push(d);
            else
                even.push(d);

            x /= 10;
        }
        reverse(digits.begin(), digits.end());
        int ans = 0;

        for (int d : digits) {
            ans *= 10;

            if (d % 2) {
                ans += odd.top();
                odd.pop();
            }
            else {
                ans += even.top();
                even.pop();
            }
        }

        return ans;
    }
};