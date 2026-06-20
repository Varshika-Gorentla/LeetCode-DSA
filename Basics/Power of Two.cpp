#include <iostream>
#include <string>
#include <bitset>
#include <cstdint>

using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};