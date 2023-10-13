/*
1913. Maximum Product Difference Between Two Pairs
10/7/2023
Time: 20 mins
(Initital approach was sort, this was simpler because only had to track 4 numbers - fancy solution isn't always best)
*/

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1=0, max2=0, min1=10001, min2=10001, max_diff;
        for (int i=0; i < nums.size(); i++) {
            if (nums[i] > max1) {
                max2 = max1;
                max1 = nums[i];
            } else if (nums[i] > max2) {
                max2 = nums[i];
            }
            if (nums[i] < min1) {
                min2 = min1;
                min1 = nums[i];
            } else if (nums[i] < min2) {
                min2 = nums[i];
            }
        }
        max_diff = (max1 * max2) - (min1 * min2);
        return max_diff;
    }
};