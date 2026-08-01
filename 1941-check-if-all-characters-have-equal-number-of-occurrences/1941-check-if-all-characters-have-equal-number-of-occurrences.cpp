class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> fq;
        for (auto c : s) {
            fq[c]++;
        }
        int pre = fq[s[0]];
        for (auto pair : fq) {
            if (pair.second != pre){
                return false;
            }
        }
        return true;
    }
};