class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> c;
        for(auto& it:paths){
            c.insert(it[0]);
        }
        for(auto& it:paths){
            string d=it[1];
            if (c.find(d) == c.end()) {
                return d;
        }
        }
        return "NO NIG";

    }
};