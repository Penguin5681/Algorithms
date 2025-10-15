#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        string test_cases(int A, int B, int C, int X) {
            if (A + B >= X or A + C >= X or C + B >= X) return "YES";
            return "NO";
        }
};

signed main(void) {
    if (1) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(0);
    }

    int test;
    cin >> test;
    Solution run;
        while (test) {
            int A, B, C, X;
            cin >> A >> B >> C >> X;
            cout << run.test_cases(A, B, C, X) << endl;
            test--;
        }
    return 0;
}