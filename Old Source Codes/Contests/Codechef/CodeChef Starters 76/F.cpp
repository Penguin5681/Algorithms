#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int test_cases(int N, int A[]) {
            sort(A, A + N);
            int sum = 0;
            for (int i = 0; i < N; ++i) {
                if (A[i] == -1) A[i] = 1;
                if (A[i + 1] == 1) A[i+1] = -1;
                break;
            }
            for (int i = 0; i < N; ++i) {
                sum += A[i];
            }
            return sum;
        }
};

signed main(void) {
    if (true) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(0);
    }

    int t;
    cin >> t;
        Solution run;
            while (t--) {
                int n;
                int A[n];
                    for (int i = 0; i < n ;++i) {
                        cin >> A[i];
                    }
                cout << run.test_cases(n, A) << endl;
            }
        return 0;
}