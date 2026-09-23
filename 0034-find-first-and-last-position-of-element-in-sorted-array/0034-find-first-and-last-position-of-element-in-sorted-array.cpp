/*class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1;
        int end = -1;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) {
                if(start == -1)
                    start = i;
                end = i;
            }
        }

        return {start, end};
    }
};*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = -1;
        int low = 0, high = nums.size() - 1;
        
        // First occurrence
        while(low <= high) {
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == target) {
                first = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        
        int last = -1;
        low = 0;
        high = nums.size() - 1;
        
        // Last occurrence
        while(low <= high) {
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == target) {
                last = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        
        return {first, last};
    }
};