class Solution {
public:
    void reverseString(vector<char>& s) {
        /*stack<char> st;
        for(int i=0;i<s.size();i++){
            
            st.push(s[i]);
        }
        s.clear();
        while(!st.empty()){
            char ch=st.top();
            s.push_back(ch);
            st.pop();
        }*/
        reverse(s.begin(),s.end());
        
    }   
};