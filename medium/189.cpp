/*
189. Rotate Array
10/10/2023
Time: 27m 20s
Note: 10m spent figuring out dealing with rotation if k > nums.size
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> nums1;
        for (int i=0; i < k; i++) {
            nums1.push_back(nums[nums.size() - k + i]);
        }
        for (int i=0; i < nums.size() - k; i++) {
            nums1.push_back(nums[i]);
        }
        nums = nums1;
    }
};