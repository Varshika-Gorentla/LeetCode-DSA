#include <vector>
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countred = 0;
        int countwhite = 0;
        int countblue = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                countred++;
            }
            else if (nums[i] == 1) {
                countwhite++;
            }
            else {
                countblue++;
            }
        }

        int idx = 0;

        for (int i = 0; i < countred; i++) {
            nums[idx++] = 0;
        }

        for (int i = 0; i < countwhite; i++) {
            nums[idx++] = 1;
        }

        for (int i = 0; i < countblue; i++) {
            nums[idx++] = 2;
        }
    }
};