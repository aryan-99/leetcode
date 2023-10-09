/*
15. 3Sum
10/8/2023
Time: 52m 34s
Note: Majority of time was spent figuring out how to avoid duplicate triples
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets;
        sort(nums.begin(), nums.end());
        for (int i=0; i < nums.size(); i++) {
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                if ((nums[i] + nums[j] + nums[k]) > 0) {
                    k--;
                } else if ((nums[i] + nums[j] + nums[k]) < 0) {
                    j++;
                } else {
                    triplets.push_back({nums[i], nums[j], nums[k]});
                    int last_j = j, last_k = k;
                    while (j < k && nums[j] == nums[last_j]) j++;
                    while (j < k && nums[k] == nums[last_k]) k--;
                }
            }
            while (i < nums.size() - 1 && nums[i] == nums[i + 1]) i++;
        }
        return triplets;
    }
};