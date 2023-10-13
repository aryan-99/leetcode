/*
202. Happy Number
10/13/2023
Time: 31m 32s
Note: Tricker than average easy questions
*/

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> happy;
        while (n != 1 && (happy.find(n) == happy.end())) {
            string n_string = to_string(n);
            happy.insert(n);
            int num = 0;
            for (int i=0; i < n_string.length(); i++) {
                num += (n_string[i] - '0') * (n_string[i] - '0');
            }
            n = num;
        }
        return (n == 1);
    }
};