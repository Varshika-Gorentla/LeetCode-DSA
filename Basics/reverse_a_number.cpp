#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long long revN=0;
        while(x!=0){
            int ld=x%10;
            revN=revN*10+ld;
            x=x/10;
        }
        if (revN>INT_MAX||revN<INT_MIN){
            revN=0;
        }
    return revN;}
};