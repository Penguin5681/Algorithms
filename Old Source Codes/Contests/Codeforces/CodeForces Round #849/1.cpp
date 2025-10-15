#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        string test_cases(char ch) {
            if (ch == 'c' or ch == 'o' or ch == 'd' or ch == 'e' or ch == 'f' or ch == 'o' or ch == 'r' or ch == 'c' or ch == 'e' or ch == 's') {
                return "YES";
            }
            return "NO";
        }
};

signed main(void) {
    if (1) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(0);
    }

    Solution run;
    int t;
    cin >> t;
        while (t--) {
            char ch;
            cin >> ch;
            cout << run.test_cases(ch) << endl;
        }

    return 0;
}