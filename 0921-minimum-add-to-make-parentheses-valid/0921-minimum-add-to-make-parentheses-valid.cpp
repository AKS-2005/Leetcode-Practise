class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        int charcount=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                charcount++;
            }
            if (s[i] == ')') {
                if (charcount == 0) {
                    count++;
                } else {
                    charcount--;
                }
            }

        }
        
        return count + charcount;
    }
};