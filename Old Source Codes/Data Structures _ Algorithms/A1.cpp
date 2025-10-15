#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void test_cases() {
            int A, B;
            cin >> A >> B;
            cout << max(A, B) - min(A, B) << endl;
        }
};

signed main(void) {
    if (true) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(0);
    }

    Solution run;
    int tc;
    cin >> tc;
        while (tc--) {
            run.test_cases();
        }
}