/*
151. Reverse Words in a String
10/8/2023
Time: 13m 2s
*/

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "", rev = "";
        for (int i=0; i < s.length(); i++) {
            while (s[i] == ' ') i++;
            word += s[i];
            if (i + 1 < s.length() && s[i + 1] == ' ') {
                words.push_back(word);
                word = "";
            }
            if (word != "" && i + 1 == s.length()) words.push_back(word);
        }
        for (int i=words.size() - 1; i >= 0; i--) {
            rev += words[i];
            if (i != 0) rev += " ";
        }
        return rev;
    }
};