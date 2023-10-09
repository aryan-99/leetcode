/*
27. Remove Element
10/8/2023
Time: 14m 13s
Note: initial approach was complicated, revised it after trying too hard
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for (int i=0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};