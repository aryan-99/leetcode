/*
13. Roman to Integer
10/9/2023
Time: 13m 31s
Note: Just took a while because of multiple cases
*/

class Solution {
public:
    int romanToInt(string s) {
        int final_int = 0;
        for (int i=0; i < s.length(); i++) {
            if (s[i] == 'V') {
                final_int += 5;
            } else if (s[i] == 'L') {
                final_int += 50;
            } else if (s[i] == 'D') {
                final_int += 500;
            } else if (s[i] == 'M') {
                final_int += 1000;
            } else if (s[i] == 'I') {
                if (i + 1 < s.length() && s[i + 1] == 'V') {
                    final_int += 4;
                    i++;
                } else if (i + 1 < s.length() && s[i + 1] == 'X') {
                    final_int += 9;
                    i++;
                } else {
                    final_int++;
                }
            } else if (s[i] == 'X') {
                if (i + 1 < s.length() && s[i + 1] == 'L') {
                    final_int += 40;
                    i++;
                } else if (i + 1 < s.length() && s[i + 1] == 'C') {
                    final_int += 90;
                    i++;
                } else {
                    final_int += 10;
                }
            } else if (s[i] == 'C') {
                if (i + 1 < s.length() && s[i + 1] == 'D') {
                    final_int += 400;
                    i++;
                } else if (i + 1 < s.length() && s[i + 1] == 'M') {
                    final_int += 900;
                    i++;
                } else {
                    final_int += 100;
                }
            }
        }
        return final_int;
    }
};