/*
69. Sqrt(x)
10/15/2023
Time: 3m 49s
Note: Optimization possible by using binary search method
*/

class Solution {
public:
    int mySqrt(int x) {
        unsigned long long sqrt = 0;
        while ((sqrt * sqrt) <= x) {
            sqrt++;
        }
        return (sqrt - 1);
    }
};