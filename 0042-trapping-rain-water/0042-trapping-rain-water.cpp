class Solution {
public:
    int trap(vector<int>& arr) {
        /*int l=0;
        int r=arr.size()-1;
        int lm=arr[l];
        int rm=arr[r];
        int wt=0;
        while(l<r){
            if(lm<rm){
                l++;
                lm=max(lm,arr[l]);
                wt+=lm-arr[l];
            }
            else{
                r--;
                rm=max(rm,arr[r]);
                wt+=rm-arr[r];
            }
        }
        return wt;*/
        stack<int> st;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[i]>arr[st.top()]){
                int bottom=st.top();
                st.pop();
                if(st.empty()) break;
                int l=st.top();
                int w=i-l-1;
                int h=min(arr[l],arr[i])-arr[bottom];
                ans+=w*h;
            }
            st.push(i);
        }
        return ans;
    }
};