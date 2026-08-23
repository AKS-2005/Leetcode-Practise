class Solution {
public:
    int n;
    unordered_map<int,int> mp;
    int t[2001][2001];
    int solve(vector<int>& stones,int csi,int prev){
        if(csi==n-1) return true;
        if(t[csi][prev]!=-1){
            return t[csi][prev];
        }
        
        bool res=false;
        for(int next=prev-1;next<=prev+1;next++){
            if(next>0){
                int ns=stones[csi]+next;
                if(mp.find(ns)!=mp.end()){
                    res=res||solve(stones,mp[ns],next);
                }
            }
        }
        return t[csi][prev]=res;
    }
    bool canCross(vector<int>& stones) {
        if(stones[1]!=1){
            return false;
        }
        n=stones.size();
        for(int i=0;i<n;i++){
            mp[stones[i]]=i;
        }
        memset(t,-1,sizeof(t));
        return solve(stones,0,0);
    }
};