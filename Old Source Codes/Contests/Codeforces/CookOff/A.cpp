#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        string test_cases(int N) {
            if (N >= 80) return "YES";
            return "NO";
        }
};

signed main(void) {
    if (1) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(0);
    }

    int T;
    cin >> T;
    Solution run;
        while (T--) {
            int N;
            cin >> N;
            cout << run.test_cases(N) << endl;
        }
    return 0;
}