/*
2609. Find the Longest Balanced Substring of a Binary String
10/7/2023
Time: 30 mins
*/

class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int max_length = 0;
        for (int i=0; i < s.length(); i++) {
            int counter0 = 0, counter1 = 0, done0 = 0;
            for (int j=i; j < s.length(); j++) {
                if (s[j] == '1') {
                    done0 = 1;
                }
                if (s[j] == '0' && !done0) {
                    counter0++;
                } else if (s[j] == '1' && done0) {
                    counter1++;
                } else if (s[j] == '0' && done0) {
                    break;
                }

                if (counter0 == counter1) {
                    int length = counter0 + counter1;
                    if (length > max_length) {
                        max_length = length;
                    }
                }
            }
        }
        return max_length;
    }
};