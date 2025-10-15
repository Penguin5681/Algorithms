#include <bits/stdc++.h>

using namespace std;
using LL = long long;

int t;

class Solution {
    public:

        string test_cases(int X, int Y) {
            if (X < Y) return "YES";
            return "NO";
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
            int X, Y;
            cin >> X >> Y;
            cout << run.test_cases(X, Y) << endl;
        }

    return 0;
}