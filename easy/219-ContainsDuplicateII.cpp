/*
219. Contains Duplicate II
10/17/2023
Time: 11m 52s
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> dupe;
        for (int i=0; i < nums.size(); i++) {
            if (dupe.find(nums[i]) == dupe.end()) {
                dupe[nums[i]] = i;
            } else {
                if ((abs(dupe[nums[i]] - i)) <= k) {
                    return true;
                } else {
                    dupe[nums[i]] = i;
                }
            }
        }
        return false;
    }
};