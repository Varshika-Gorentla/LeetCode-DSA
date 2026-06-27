#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> nums3;
        vector<int> ans;

        // Copy valid elements from nums1
        for (int i = 0; i < m; i++) {
            nums3.push_back(nums1[i]);
        }

        int i = 0;
        int j = 0;

        // Merge the two sorted arrays
        while (i < nums3.size() && j < nums2.size()) {

            if (nums3[i] <= nums2[j]) {
                ans.push_back(nums3[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // Remaining elements of nums3
        while (i < nums3.size()) {
            ans.push_back(nums3[i]);
            i++;
        }

        // Remaining elements of nums2
        while (j < nums2.size()) {
            ans.push_back(nums2[j]);
            j++;
        }

        // Copy merged array back to nums1
        for (int k = 0; k < ans.size(); k++) {
            nums1[k] = ans[k];
        }
    }
};