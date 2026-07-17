/*class Solution {
public:
    long long gcd(long long a,long long b){
        while(b){
            long long t=a%b;
            a=b;
            b=t;
        }
        return a;
    }

    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        unordered_map<int,long long> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                mp[gcd(nums[i],nums[j])]++;
            }
        }
        vector<pair<long long,int>> pref;
        vector<pair<int,long long>> temp;
        for(auto &x:mp)
            temp.push_back({x.first,x.second});
        sort(temp.begin(),temp.end());
        long long sum=0;
        for(auto &x:temp){
            sum+=x.second;
            pref.push_back({sum,x.first});
        }
        vector<int> ans;
        for(long long q:queries){
            auto it=lower_bound(pref.begin(),pref.end(),
                                make_pair(q+1LL,0));
            ans.push_back(it->second);
        }
        return ans;
    }
};*/
class Solution {
public:

    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<int> freq(maxVal + 1);
        for (int x : nums)
            freq[x]++;
        vector<long long> count(maxVal + 1);
        for (int d = 1; d <= maxVal; d++) {
            for (int multiple = d; multiple <= maxVal; multiple += d) {
                count[d] += freq[multiple];
            }
        }
        vector<long long> gcdCount(maxVal + 1);
        for (int d = maxVal; d >= 1; d--) {
            long long pairs = count[d] * (count[d] - 1) / 2;
            gcdCount[d] = pairs;
            for (int multiple = 2*d; multiple <= maxVal; multiple += d) {
                gcdCount[d] -= gcdCount[multiple];
            }
        }
        vector<long long> prefix(maxVal + 1);
        for (int i = 1; i <= maxVal; i++) {
            prefix[i] = prefix[i-1] + gcdCount[i];
        }
        vector<int> ans;
        for (long long q : queries) {
            int gcdValue = lower_bound(prefix.begin(),
                                       prefix.end(),
                                       q + 1)
                           - prefix.begin();

            ans.push_back(gcdValue);
        }
        return ans;
    }
};