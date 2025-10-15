#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        string test_cases(int A, int B, int C) {
            if (B * C >= A)
                return "YES";
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
            int A, B, C;
            cin >> A >> B >> C;
            cout << run.test_cases(A, B, C) << endl;        
        }

    return 0;
}