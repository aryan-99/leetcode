/*
66. Plus One
10/15/2023
Time: 12m 55s
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carry = false;
        for (int i=digits.size() - 1; i >= 0; i--) {
            if (i == digits.size() - 1 || carry) {
                digits[i]++;
                carry = false;
            }
            if (digits[i] == 10) {
                digits[i] = 0;
                carry = true;
            }
            if (carry && i == 0) {
                digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};