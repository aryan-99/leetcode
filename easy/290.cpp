/*
290. Word Pattern
10/11/2023
Time: 12m 6s
*/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m;
        vector<string> words;
        string word = "";
        for (int i=0; i < s.length(); i++) {
            if (s[i] == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word += s[i];
                if (i + 1 == s.length()) words.push_back(word);
            }
        }
        if (pattern.length() != words.size()) return false;
        for (int i=0; i < pattern.length(); i++) {
            if (m.find(pattern[i]) == m.end()) {
                for (auto& item : m) {
                    if (item.second == words[i]) {
                        return false;
                    }
                }
                m[pattern[i]] = words[i];
            } else if (m[pattern[i]] != words[i]) {
                return false;
            }
        }
        return true;
    }
};