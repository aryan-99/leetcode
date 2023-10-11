/*
383. Ransom Note
10/8/2023
Time: 8m 12s
Note: Used by implementing hashmap - could possible use a vector/array of size 256 for ASCII values for constant memory and faster runtime
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> chars;
        for (int i=0; i < magazine.length(); i++) {
            if (chars.find(magazine[i]) != chars.end()) {
                chars[magazine[i]] += 1;
            } else {
                chars[magazine[i]] = 1;
            }
        }
        for (int i=0; i < ransomNote.length(); i++) {
            if (chars.find(ransomNote[i]) == chars.end()) {
                return false;
            } else if (chars[ransomNote[i]] > 0) {
                chars[ransomNote[i]]--;
            } else {
                return false;
            }
        }
        return true;
    }
};