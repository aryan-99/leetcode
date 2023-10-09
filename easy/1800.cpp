/*
1800. Maximum Ascending Subarray Sum
10/7/2023
Time: 9m 10s
*/

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_sum = 0;
        for (int i=0; i < nums.size(); i++) {
            int local_max_sum = nums[i];
            if (local_max_sum > max_sum) {
                max_sum = local_max_sum;
            }
            for (int j=i+1; j < nums.size(); j++) {
                if (nums[j] <= nums[j - 1]) {
                    break;
                }
                local_max_sum += nums[j];
                if (local_max_sum > max_sum) {
                    max_sum = local_max_sum;
                }
            }
        }
        return max_sum;
    }
};