#include <bits/stdc++.h>
#include <vector>

typedef std::string txt;            // cSpell:ignore racecar

bool is_palindrome(std::string str) {
    bool flag = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == str[str.length() - 1 - i]) {
            flag = true;
            return true;
        }
    }
    return false;
} 

signed main(void) {
    // Palindrome Check
    if (is_palindrome("RACECAR") == true) {
        std::cout << "Y\n";
    }               
    else std::cout << "N\n";
}