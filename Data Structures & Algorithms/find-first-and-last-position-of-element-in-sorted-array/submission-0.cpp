class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int lower = lowerbound(arr, target);
        int higher = higherbound(arr, target) - 1;
         if (lower >= arr.size() || arr[lower] != target) {
            return {-1, -1};
        }
        vector<int> res = {lower, higher};
        return res;
    }
    int lowerbound(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size();
        while (low < high) {
            int mid = low + (high - low)/2;

            if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }

    int higherbound(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size();
        while (low < high) {
            int mid = low + (high - low)/2;

            if (arr[mid] <= target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
};



    
