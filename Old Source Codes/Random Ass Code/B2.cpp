#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int t;

class Solution {
    public:
        void test_cases() {
            int N, A, B;
            cin >> N >> A >> B;
            int evenNum = 0;
            int oddNum = 0;

            for (int i = 1; i <= N; i++) {
                if (i % 2 == 0) evenNum++;
                else oddNum++;
            }
            cout << (A * evenNum) + (B * oddNum) << endl;
        }
};

signed main(void) {
    Solution run;
    cin >> t;
        while (t--) run.test_cases();
}