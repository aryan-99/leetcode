/*
49. Group Anagrams
10/17/2023
Time: 32m 17s
Note: Initial approach was complicated, involving unordered_map<unordered_set<char>, int> to store letters and index of vector - needed custom hash for that
Next approach was incorrect - summed up chars of a string to get ascii value and store in map, but you can get same ascii value using different letters
Final approach was good intuition - sort the letters to see if they are the same 
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string, int> map;
        for (int i=0; i < strs.size(); i++) {
            string ana = strs[i];
            sort(ana.begin(), ana.end());
            if (map.find(ana) != map.end()) {
                output[map[ana]].push_back(strs[i]);
            } else {
                output.push_back({strs[i]});
                map[ana] = output.size() - 1;
            }
        }
        return output;
    }
};