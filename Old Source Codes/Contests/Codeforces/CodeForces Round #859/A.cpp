#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        char test_cases(int a, int b, int c) {
            if (a + b == c) return '+';
            return '-';
        }
};

signed main(void) {
    Solution run;
    int tc;
    cin >> tc;
        while (tc--) {
            int a, b, c;
            cin >> a >> b >> c;
            cout << run.test_cases(a, b, c) << endl;
        }
}