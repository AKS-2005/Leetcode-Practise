class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        stack<char> st;

        for (char c : s) {
            if (isVowel(c))
                st.push(c);
        }

        for (char &c : s) {
            if (isVowel(c)) {
                c = st.top();
                st.pop();
            }
        }

        return s;
    }
};