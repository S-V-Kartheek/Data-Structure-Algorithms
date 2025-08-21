class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty()) return -1;  // prevent UB

        int low = 0, high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;
             if(nums[mid] == target) return true;
            // handle duplicates safely
            while(low < high && nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
            }
            if(nums[low] <= nums[mid]) {
                // left half is sorted
                if(nums[low] <= target && target < nums[mid]){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                // right half is sorted
                if(nums[mid] < target && target <= nums[high]){
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};
