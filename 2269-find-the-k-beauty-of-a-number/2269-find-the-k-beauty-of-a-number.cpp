class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int n = s.size();
        int ans = 0;
        for (int i = 0; i <= n - k; i++) {
            int x = 0;
            for (int j = i; j < i + k; j++) {
                x = x * 10 + (s[j] - '0');
            }
            if (x != 0 && num % x == 0)
                ans++;
        }
        return ans;
    }
};