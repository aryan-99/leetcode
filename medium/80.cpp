/*
80. Remove Duplicates from Sorted Array II
10/8/2023
Time: 35m
Note: Approached it from many directions before coming to this - try to only consider relevant elements to the current position
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for (int i=0; i < nums.size(); i++) {
            if (j == 0 || j == 1 || nums[j - 2] != nums[i]) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};