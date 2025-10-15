#include <bits/stdc++.h>

using namespace std;
using LL = long long;

int t;
int x, y;

class Solution {
    public:
        string test_cases(int A, int B, int C) {
            int Ha, Hb, Hc;
            Ha = A; Hb = B; Hc = C;
            Ha -= min(A, B);
        }
};

signed main(void) {
    if (1) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(0);
    }

    cin >> t;
    Solution run;

        while (t--) {
            int A; int B; int C;
            cin >> A >> B >> C;
            cout << run.test_cases(A, B, C) << endl;
        }

    return 0;
}