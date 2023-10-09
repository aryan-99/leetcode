/*
492. Construct the Rectangle
10/7/2023
Time: 10m 54s
Note: could most likely improve
*/

class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> dimensions = {area, 1};
        int min_diff = area - 1;
        for (int i=1; i < area; i++) {
            if ((area / i) < i) {
                break;
            }
            if (area % i == 0) {    // is a factor (possible dimension)
                int l = area / i;
                if ((l - i) < min_diff) {
                    dimensions[0] = l;
                    dimensions[1] = i;
                    min_diff = l - i;
                }
            }
        }
        return dimensions;
    }
};