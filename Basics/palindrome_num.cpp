#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long long revN=0;
        if(x<0){
            return false;
        }
        if(x>=0){
            int dup=x;
            while(x>0){
                int ld=x%10;
                revN=revN*10+ld;
                x=x/10;
            }
        return dup==revN;}
    return 0;}
};