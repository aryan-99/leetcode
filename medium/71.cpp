/*
71. Simplify Path
10/12/2023
Time: 42m 44s
Note: Edge cases regarding '.' took most time
*/

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> trace;
        string can_path = "";
        for (int i=1; i < path.length(); i++) {
            if (path[i] == '.') {
                if (i + 1 < path.length() && path[i + 1] == '.' && ((i + 2 < path.length() && path[i + 2] == '/') || (i + 2 == path.length()))) {
                    if (trace.empty()) {
                        i++;
                        continue;
                    } else trace.pop();
                    i++;
                } else if ((i + 1 < path.length() && path[i + 1] == '/') || i + 1 == path.length()) {
                    continue;
                } else {
                    int j = i;
                    while (i < path.length() && path[i] != '/') i++;
                    trace.push(path.substr(j, i - j));
                }
            } else if (path[i] == '/') {
                while (i < path.length() && path[i] == '/') i++;
                i--;
            } else {
                int j = i;
                while (i < path.length() && path[i] != '/') i++;
                trace.push(path.substr(j, i - j));
            }
        }
        if (trace.empty()) return "/";
        while (!trace.empty()) {
            can_path = "/" + trace.top() + can_path;
            trace.pop();
        }
        return can_path;
    }
};