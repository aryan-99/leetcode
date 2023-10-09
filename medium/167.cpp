/*
167. Two Sum II - Input Array Is Sorted
10/9/2023
Time: 11m 12s
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i=0, j=numbers.size() - 1; i < numbers.size();) {
            if (numbers[i] + numbers[j] == target) {
                return {++i, ++j};
            }
            if (numbers[i] + numbers[j] < target) {
                i++;
            } else {
                j--;
            }
        }
        return {};
    }
};