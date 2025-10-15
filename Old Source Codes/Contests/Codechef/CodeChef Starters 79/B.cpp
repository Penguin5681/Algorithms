#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void test_cases() {
            int X, Y;
            cin >> X >> Y;
            int P1 = 100 - ((X * 100) / 100);
            int P2 = 200 - ((Y * 200) / 100);
            if (P1 < P2) cout << "FIRST\n";
            else if (P1 > P2) cout << "SECOND\n";
            else cout << "BOTH\n";
        }
};

signed main(void) {
    if (true) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(0);
    }

    int tc;
    cin >> tc;
    Solution run;
        while (tc--) {
            run.test_cases();
        }
    return 0;
}