/*
392. Is Subsequence
10/9/2023
Time: 7m 40s
Note: Took an extra 5 minutes because interchanged s with t
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == t) return true;
        for (int i=0; i < t.length(); i++) {
            int counter = 0;
            for (int j=i; j < t.length(); j++) {
                if (t[j] == s[counter]) {
                    counter++;
                }
                if (counter == s.length()) {
                    return true;
                }
            }
        }
        return false;
    }
};