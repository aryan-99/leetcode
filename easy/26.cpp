/*
26. Remove Duplicates from Sorted Array
10/8/2023
Time: 4m 20s
Note: Be careful with increment - j++ increments AFTER operation, needed to use ++j here
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for (int i=0; i < nums.size(); i++) {
            if (nums[i] != nums[j]) {
                nums[++j] = nums[i];
            }
        }
        return j + 1;
    }
};