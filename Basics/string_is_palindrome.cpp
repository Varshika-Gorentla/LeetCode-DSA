#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for (char ch:s){
            if(isalnum(ch)){
                a+=tolower(ch);
            }
        }
        string dup=a;
        for(int i=0;i<a.size()/2;i++){
            swap(a[i],a[a.size()-i-1]);
        }
    return dup==a;}
};