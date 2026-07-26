class Solution {
public:
    int maximumProduct(vector<int>& A) {
        sort(A.begin(),A.end());
        int n=A.size();
        return max(
            A.back() * A[n - 2] * A[n - 3],
            A.back() * A.front() * A[1]
        );
    }
   
};