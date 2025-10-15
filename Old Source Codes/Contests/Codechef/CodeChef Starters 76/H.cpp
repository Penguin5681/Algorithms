/* #include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int Run_Test_Cases(int N, int A[], int B[]) {
            int count = 0; int count_max = 0;
            for (int i = 0, j; i < N; ++i) {
                    if (A[i] != 0 and B[i] != 0) {
                        count++;
                        count_max = max(count, count_max);
                    }
                    else count = 0;;
                }
                return count_max;
            }
            
        };

signed main(void) {
    if (1) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(0);
    }

    int t;
    cin >> t;
    Solution Solve;
        while (t--) {
            int N;
            cin >> N;
            int A[N], B[N];
                for (int i = 0 ; i < N; ++i) {
                    cin >> A[i];
                }
                for (int i = 0 ; i < N; ++i) {
                    cin >> B[i];
                }
            cout << Solve.Run_Test_Cases(N, A, B) << endl;
        }
    return 0;
} */