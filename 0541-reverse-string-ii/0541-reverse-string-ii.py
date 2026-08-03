class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        ans = ""

        for i in range(0, len(s), 2 * k):
            first = s[i:i+k]          
            second = s[i+k:i+2*k]     

            ans += first[::-1] + second

        return ans