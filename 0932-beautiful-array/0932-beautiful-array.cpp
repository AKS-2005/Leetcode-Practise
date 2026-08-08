class Solution {
public:
    vector<int> beautifulArray(int n) {
        if (n == 1)
            return {1};
        int leftSize = (n + 1) / 2;
        int rightSize = n / 2;
        vector<int> left = beautifulArray(leftSize);
        vector<int> right = beautifulArray(rightSize);
        vector<int> res;
        for (int x : left) {
            res.push_back(2 * x - 1);
        }
        for (int x : right) {
            res.push_back(2 * x);
        }

        return res;
    }
    /*
    formula odd_ele = 2*x-1 -->REFRENCE
            even_ele=2*x
    */
};