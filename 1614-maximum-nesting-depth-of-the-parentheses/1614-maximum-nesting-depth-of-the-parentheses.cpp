class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int cnt=0;
        int maxc=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
                cnt++;
                maxc=max(maxc,cnt);
            }
            else if(s[i]==')'){
                st.pop();
                cnt--;
            }
        }
        return maxc;
    }
};