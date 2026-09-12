class Solution {
public:
	int maxRepeating(string sequence, string word) {
		/*int k = 0;                                   -------> BRUTE FORCE SOLUTION 
		string temp = word;

		while(sequence.find(temp) != string::npos){
			temp += word;
			k++;
		}

		return k;*/

        /* --------  DP SOLUTION --------*/  
        int n=sequence.size();
        int m=word.size();
        vector<int> dp(n+1,0);
        int ans=0;
        for(int i=m;i<=n;i++){
            if(sequence.substr(i - m, m) == word){
                dp[i] = dp[i - m] + 1;
                ans = max(ans, dp[i]);
            }
        }
        return ans;

	}
};