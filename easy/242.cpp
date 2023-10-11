/*
242. Valid Anagram
10/8/2023
Time: 4m 24s
Note: Using an array would be much easier and efficient here
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> anagram;
        for (int i=0; i < s.length(); i++) {
            if (anagram.find(s[i]) == anagram.end()) {
                anagram[s[i]] = 1;
            } else {
                anagram[s[i]] += 1;
            }
        }
        for (int i=0; i < t.length(); i++) {
            if (anagram.find(t[i]) == anagram.end()) {
                return false;
            } else if (anagram[t[i]] <= 0) {
                return false;
            } else {
                anagram[t[i]] -= 1;
            }
        }
        return true;
    }
};