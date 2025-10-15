#include <bits/stdc++.h>

using namespace std;
using LL = long long;

int t;

class Solution {
    public:
        int test_cases(int X, int Y, int Z) {
            int max = 10 * X;
            int amt = max >= Y ? Y * Z : max * Z;
            return amt;
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
            int A, B, C;
            cin >> A >> B >> C;
            cout << run.test_cases(A, B, C) << endl;
        }

    return 0;
}