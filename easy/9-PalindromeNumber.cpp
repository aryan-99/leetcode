/*
9. Palindrome Number
10/15/2023
Time: 2m 35s
Note: Approach this without converting to string?
*/

class Solution {
public:
    bool isPalindrome(int x) {
        string xs = to_string(x);
        int i = 0, j = xs.length() - 1;
        while (i < j) {
            if (xs[i] != xs[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};