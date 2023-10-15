/*
50. Pow(x, n)
10/15/2023
Time: 39m 50s
Note: Got confused on the even case for recursive call.
Also, leetcode edge cases are ridiculous.
*/

class Solution {
public:
    double myPow(double x, int n) {
        if (x == 0) return 0;
        if (n == 0) return 1;
        if (n < 0) return (1 / powHelp(x, abs(n)));
        return powHelp(x, n);
    }
    double powHelp(double x, long n) {
        if (n == 1) {
            return x;
        } else if (n % 2 == 0) {
            return (powHelp(x * x, n/2));
        } else {
            return (x * (powHelp(x, n-1)));
        }
        
    }
};