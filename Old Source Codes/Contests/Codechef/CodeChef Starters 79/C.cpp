#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void test_cases() {
            int N;
            cin >> N;
            vector<int> V(N);

            for (int i = 0; i < N; ++i) {
                V[i] = i + 1;
            }

            random_shuffle(V.begin(), V.end());

            for (int i = 0; i < N; ++i) {
                cout << V[i] << " " << V[N - 1 - i] << " ";
            }
            cout << '\n';
        }
};

signed main(void) {
    
    if (true) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(0);
    }

    int tc;
    cin >> tc;
    Solution run;
        while (tc--) {
            run.test_cases();
        }
    return 0;
}