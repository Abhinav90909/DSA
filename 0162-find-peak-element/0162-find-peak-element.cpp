class Solution {
public:
    //Linear Search approach
        int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < nums[mid + 1])
                low = mid + 1;      // peak right side me hai
            else
                high = mid;         // peak left side me hai (mid included)
        }
        return low;

    }
};