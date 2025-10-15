// 12. Integer to Roman

#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    vector<pair<int, char>> romanInt = {{1000, 'M'}, {900, 'CM'}, {500, 'D'}, {400, 'CD'}, {100, 'C'}, {90, 'XC'}, {50, 'L'}, {40, 'XL'}, {10, 'X'}, {9, 'IX'}, {5, 'V'}, {4, 'IV'}, {1, 'I'}};
public:
    string intToRoman(int num) {
        string res;
        auto it = romanInt.begin();
        while (num > 0 && it != romanInt.end()) {
            if (num >= it->first) {
                num -= it->first;
                res += it->second;
            } else {
                ++it;
            }
        }
        return res;
    }
};

signed main(void) {
    Solution s;
    cout << s.intToRoman(12);
}