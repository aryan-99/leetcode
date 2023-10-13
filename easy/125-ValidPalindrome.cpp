/*
125. Valid Palindrome
10/9/2023
Time: 18m 40s
Note: Took much longer than it should have, was unsure about leetcode compiler error and functions allowed to use
Also could have maybe done everything in place to save memory
*/

class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        for (int i=0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                s1 += tolower(s[i]);
            }
        }
        for (int i=0, j=s1.length() - 1; i < s1.length() / 2; i++, j--) {
            if (s1[i] != s1[j]){
                return false;
            }
        }
        return true;
    }
};