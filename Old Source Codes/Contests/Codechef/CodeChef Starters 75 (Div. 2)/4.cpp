#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void test_cases() {
            int A, B, C, D;
            cin >> A >> B >> C >> D;
            int start = max(A, C);
            int end = min(B, D);
            int result = (B - A + 1) + (D - C + 1) - (end - start + 1);
            cout << result << endl;
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