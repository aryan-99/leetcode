/*
2451. Odd String Difference
10/7/2023
Time: 17m 0s
*/

class Solution {
public:
    string oddString(vector<string>& words) {
        string odd;
        vector<vector<int>> diff_array;
        for (int i=0; i < words.size(); i++) {
            vector<int> diff;
            for (int j=1; j < words[i].length(); j++) {
                diff.push_back(int(words[i][j]) - int(words[i][j - 1]));
            }
            diff_array.push_back(diff);
        }
        int count = 0;
        for (int i=1; i < diff_array.size(); i++) {
            if (diff_array[i] == diff_array[i - 1]) {
                count++;
            } else if (count > 0) {
                odd = words[i];
                break;
            } else {
                if (diff_array[i + 1] != diff_array[i]) {
                    odd = words[i];
                } else {
                    odd = words[i - 1];
                }
                break;
            }
        }
        return odd;
    }
};