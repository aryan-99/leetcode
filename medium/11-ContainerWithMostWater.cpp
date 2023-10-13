/*
11. Container With Most Water
10/8/2023
Time: 14m 49s
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        for (int i=0, j=height.size() - 1; i < j;) {
            max_area = max((min(height[i], height[j]) * (j - i)), max_area);
            if (min(height[j], height[i]) == height[i]) {
                i++;
            } else {
                j--;
            }
        }
        return max_area;
    }
};