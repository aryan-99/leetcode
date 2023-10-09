/*
88. Merge Sorted Array
10/8/2023
Time: 6m 20s
Note: Used bubble sort (O(n^2)), look into more efficient sorting algos
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i=0; i < nums2.size(); i++) {  // combine both lists
            nums1[nums1.size() - nums2.size() + i] = nums2[i];
        }
        for (int i=0; i < nums1.size(); i++) {  // bubble sort
            for (int j=i+1; j < nums1.size(); j++) {
                if (nums1[j] < nums1[i]) {
                    int tmp = nums1[j];
                    nums1[j] = nums1[i];
                    nums1[i] = tmp;
                }
            }
        }
    }
};