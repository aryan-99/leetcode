/*
20. Valid Parentheses
10/12/2023
Time: 11m 53s
Note: Edge cases took more time
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for (int i=0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                brackets.push(s[i]);
            } else if (brackets.empty()) {
                return false;
            } else if ((s[i] == ')' && brackets.top() != '(') || (s[i] == ']' && brackets.top() != '[') || (s[i] == '}' && brackets.top() != '{')) {
                return false;
            } else {
                brackets.pop();
            }
        }
        return (brackets.empty()) ;
    }
};