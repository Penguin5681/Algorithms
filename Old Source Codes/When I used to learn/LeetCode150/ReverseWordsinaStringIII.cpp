// 557. Reverse Words in a String III

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0; i < s.size(); i++) {
            int l = 0; int r = 0;
            while (s[i] != ' ')
                r++;
            while (l <= r) {
                swap(s[l], s[r]);
            }
        }
        return s;
    }
};

signed main() {

}