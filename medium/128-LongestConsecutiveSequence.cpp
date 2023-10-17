/*
128. Longest Consecutive Sequence
10/17/2023
Time: 57m 48s
Note: Went into wrong direction by trying to use set instead of unordered_set [set uses binary tree whereas unordered_set used hash tables]
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        unordered_set<int> long_set;
        for (int i=0; i < nums.size(); i++) {
            long_set.insert(nums[i]);
        }
        int counter = 1, max_counter = 1;
        for (auto &it : long_set) {
            int item = it;
            if (long_set.find(item - 1) != long_set.end()) continue;
            while (long_set.find(item + 1) != long_set.end()) {
                counter++;
                item = *(long_set.find(item + 1));
            }
            max_counter = max(max_counter, counter);
            counter = 1;
        }
        return max_counter;
    }
};