class Solution {
public:
    int maximum69Number(int num) {
        /*string s=to_string(num);
        for(int i=0;i<s.length();i++){
            if(s[i]=='6'){
                s[i]='9';
                break;
            }
        }
        return stoi(s);*/
        vector<int> arr;
        while (num > 0) {
            int digi = num % 10;
            arr.push_back(digi);
            num /= 10;
        }
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] == 6) {
                arr[i] = 9;
                break;
            }
        }
        int res = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            res = res * 10 + arr[i];
        }
        return res;
    }
};