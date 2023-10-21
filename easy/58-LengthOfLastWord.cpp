/*
58. Length of Last Word
10/19/2023
Time: 3m 59s
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int counter = 0;
        while (s[i] == ' ') i--;
        while (i >= 0 && s[i] != ' ') {
            i--;
            counter++;
        }
        return counter;
    }
};