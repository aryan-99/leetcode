/*
172. Factorial Trailing Zeroes
10/15/2023
Time: 29m 37s
Note: Tough initial intuition, had to understand this from external sources. 
Trailing zeroes means we're looking for amount of "10" factors, and only way to get 10 is 2 * 5
This means we want the amount of pairs of 2 * 5 for a factorial. Since there will always be less 5s than 2s, our count is bound by the number of 5s. 
So we keep dividing n by 5 until it hits 0 and keep adding the value of n / 5 to our number of 0s.
*/

class Solution {
public:
    int trailingZeroes(int n) {
        int trail_zeroes = 0;
        while (n / 5 > 0) {
            trail_zeroes += (n / 5);
            n /= 5;
        }
        return trail_zeroes;
    }
};