class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int milf = low + (high - low)/2;

            if (nums[milf] == target) {
                return milf;
            }

            if (nums[milf] < target) {
                low = milf + 1;
            }
            else {
                high = milf - 1;
            }
        }

        return -1;

    }
};