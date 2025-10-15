#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n], dp[n][2];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            dp[i][0] = dp[i][1] = 1e9;
        }

        dp[0][a[0] % 2] = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] % 2 == 0) {
                dp[i][0] = min(dp[i-1][0], dp[i-1][1] + 1);
                dp[i][1] = dp[i-1][1] + 1;
            } else {
                dp[i][1] = min(dp[i-1][0] + 1, dp[i-1][1]);
                dp[i][0] = dp[i-1][0] + 1;
            }
        }

        cout << min(dp[n-1][0], dp[n-1][1]) << endl;
    }

    return 0;
}
