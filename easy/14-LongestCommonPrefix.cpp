/*
14. Longest Common Prefix
10/21/2023
Time: 13m 26s
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        for (int i=0; i < strs[0].length(); i++) {
            bool add_prefix = true;
            for(int j=1; j < strs.size(); j++) {
                if (strs[j][i] != strs[0][i]) {
                    add_prefix = false;
                    break;
                }
            }
            if (add_prefix) prefix += strs[0][i];
            else break;
        }
        return prefix;
    }
};