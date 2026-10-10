class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapS;
        unordered_map<char, char> mapT;


        for (int i = 0; i < s.length(); i++) {
            char sc = s[i], tc = t[i];
            if (mapS.count(sc) && mapS[sc] != tc) return false;
            if (mapT.count(tc) && mapT[tc] != sc) return false;

            mapS[sc] = tc;
            mapT[tc] = sc;
        }
        return true;
    }
};