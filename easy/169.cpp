/*
169. Majority Element
10/8/2023
Time: 16m 37s
Note: Discovered new algorithm: Moore's voting algorithm (works for finding majority element [> n/2])
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // moore's algo
        int cand = 0, votes = 0;
        for (int i=0; i < nums.size(); i++) {
            if (votes == 0) {
                cand = nums[i];
            }
            if (nums[i] == cand) {
                votes++;
            } else {
                votes--;
            }
        }
        return cand;
    }
};