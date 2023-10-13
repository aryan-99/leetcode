/*
205. Isomorphic Strings
10/11/2023
Time: 13m 22s
Note: Extra time needed for edge cases
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, char> iso;
        for (int i=0; i < s.length(); i++) {
            if (iso.find(s[i]) == iso.end()) {
                for (auto& item : iso) {
                    if (item.second == t[i]) {
                        return false;
                    }
                }
                iso[s[i]] = t[i];
            } else if (iso[s[i]] != t[i]) {
                return false;
            }
        }
        return true;
    }
};