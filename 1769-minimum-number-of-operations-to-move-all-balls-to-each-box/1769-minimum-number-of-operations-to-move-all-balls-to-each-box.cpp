class Solution {
public:
    vector<int> minOperations(string boxes) {
        /*int n=boxes.size();      -----> BRUTE FORCE
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(boxes[j]=='1'){
                    ans[i]+=abs(i-j);
                }
            }
        }
        return ans;*/
        int n=boxes.size();
        int sum=0;
        int one=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            sum +=one;
            if(boxes[i]=='1'){
                one++;
            }
            ans.push_back(sum);
        }
        sum=0;one=0;
        for(int i=n-1;i>=0;i--){
            sum +=one;
            if(boxes[i]=='1'){
                one++;
            }
            ans[i]+=sum;
        }
        return ans;
    }
};