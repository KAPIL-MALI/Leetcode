class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int start = 0, end = n - 1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            // Check if left half is sorted
            if (nums[start] <= nums[mid]) {

                // ❌ Your mistake:
                // You were deciding only by comparing nums[mid] with target.
                // You also need to check whether target lies in this sorted half.
                if (target >= nums[start] && target < nums[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            else { // Right half is sorted

                // ❌ Your mistake:
                // Again, compare target with the sorted right half instead
                // of only comparing nums[mid] with target.
                if (target > nums[mid] && target <= nums[end]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};