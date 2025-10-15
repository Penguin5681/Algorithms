#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int test_cases(int N, int A[]) {
            int result1 = 0;
            int result2 = 0;
            bool flag = false;

            // Check for positives
            /* for (int i = 0; i < A.size(); ++i) {
                if (A[i] >= 0) flag = true;
                else flag = false;
            }

            if (flag) {
                for (int i = 0; i < N; ++i) result1 += A[i];
            }
            return result1;

            if (!flag) {
                for (int i = 0; i < N; ++i) {

                }
            } */
            for (int i = 0; i < N; ++i) {
                if (A[i] < 0) A[i] = A[i] * -1;
                result1 += A[i];
            }
            return result1;
        }
};

signed main(void) {
    int t;
    cin >> t;
    Solution run;
        while (t--) {
            int N;
            cin >> N;
            int A[N];
            for (int i = 0; i < N; ++i) cin >> A[i];
            cout << run.test_cases(N, A) << '\n';
        }
}