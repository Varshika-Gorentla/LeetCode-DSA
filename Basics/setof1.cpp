#include <iostream>
#include <string>
#include <bitset>
#include <cstdint>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        string binary=bitset<64>(n).to_string();
        int count=0;
        for (int i=0;i<64;i++){
            if (binary[i]=='1'){
                count=count+1;
            }
        }
    return count;}
};