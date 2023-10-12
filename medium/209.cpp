/*
209. Minimum Size Subarray Sum
10/10/2023
Time: 22m 40s
*/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_length = INT_MAX, window_sum = 0, j = 0;
        for (int i=0; i < nums.size(); i++) {
            window_sum += nums[i];
            if (window_sum >= target) {
                while (window_sum >= target && j <= i) {
                    if (window_sum - nums[j] >= target) {
                        window_sum -= nums[j++];
                    } else {
                        break;
                    }
                }
                min_length = min(min_length, i - j + 1);
            }
        }
        return (min_length == INT_MAX ? 0 : min_length);
    }
};