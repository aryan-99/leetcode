/*
1. Two Sum
10/13/2023
Time: 16m 54s
Note: Opted to use hashmaps for better time complexity as compared to brute force O(n^2) method
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        vector<int> results;
        for (int i=0; i < nums.size(); i++) {
            indices[i] = nums[i];
        }
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            if (target > (nums[i] + nums[j])) i++;
            else if (target < (nums[i] + nums[j])) j--;
            else {
                for (auto &item : indices) {
                    if (item.second == nums[i] || item.second == nums[j]) {
                        results.push_back(item.first);
                    }
                }
                sort(results.begin(), results.end());
                break;
            }
        }
        return results;
    }
};