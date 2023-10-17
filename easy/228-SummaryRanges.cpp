/*
228. Summary Ranges
10/17/2023
Time: 17m 54s
Note: Took longer than should have because of typo with increment and weird inner while loop construction initially
*/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        int i = 0, j = 0;
        while (i < nums.size()) {
            string interval = "" + to_string(nums[i]);
            j = i;
            while (j < nums.size() - 1 && nums[j + 1]  == nums[j] + 1) j++;
            if (i != j) interval = interval + "->" + to_string(nums[j]);
            output.push_back(interval);
            i = j;
            i++;
        }
        return output;
    }
};