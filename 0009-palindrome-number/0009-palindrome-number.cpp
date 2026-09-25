#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindrome
        if(x < 0) return false;
        
        long long original = x, reversed = 0;
        while(x > 0){
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return original == reversed;
    }
};