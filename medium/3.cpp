/*
3. Longest Substring Without Repeating Characters
10/9/2023
Time: 27m 50s
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0, i = 0, j = 0;
        vector<bool> chars(256, false);
        while (j < s.length()) {
            if (!chars[s[j]]) {
                max_length = max(max_length, j - i + 1);
                chars[s[j++]] = true;
            } else {
                chars[s[i++]] = false;
            }
        }
        return max_length;
    }
};