class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> outer = {{}};

        int start = 0;

        for(int i = 0; i < nums.size(); i++) {
            int n = outer.size();

            int begin;

            if(i > 0 && nums[i] == nums[i - 1])
                begin = start;
            else
                begin = 0;

            for(int j = begin; j < n; j++) {
                vector<int> internal = outer[j];
                internal.push_back(nums[i]);
                outer.push_back(internal);
            }

            // subsets created in THIS iteration
            start = n;
        }

        return outer;
    }
};
/* -- BASE CODE
vector<vector<int>> outer = {{}};
        for(int num : nums){
            int n = outer.size();
            for(int i = 0; i < n; i++){
                vector<int> internal = outer[i];
                internal.push_back(num);
                outer.push_back(internal);
            }
        }
        return outer;
*/