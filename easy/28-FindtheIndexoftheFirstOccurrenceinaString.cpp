/*
28. Find the Index of the First Occurrence in a String
10/19/2023
Time: 13m 44s
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i;
        for (i=0; i < haystack.length(); i++) {
            if (haystack[i] == needle[0]) {
                int j, k = i;
                for (j=0; j < needle.length(); j++) {
                    if (haystack[k] != needle[j]) {
                        break;
                    }
                    k++;
                }
                if ((k - i) == needle.length()) {
                    return i;
                }
            }
        }
        return -1;
    }
};