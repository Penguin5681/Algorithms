#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void test_cases() {
            int X, Y;
            cin >> X >> Y;
            int NEW = (0.1 * X) + X;
            int NEW_Y = X - Y;
            cout << NEW - NEW_Y << endl;
            return;
        }
};

signed main(void) {
    if (1) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(0);
    }

    int t;
    cin >> t;
    Solution run;
        while (t--) {
            run.test_cases();
        }
    return 0;
}