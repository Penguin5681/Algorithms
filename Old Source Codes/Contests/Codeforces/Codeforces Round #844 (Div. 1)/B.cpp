#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int t, h, w, k, r, c;
vector<pair<int, int>> brokenWindows;
int dp[45][45][2];

int main() {
    cin >> t;
    while (t--) {
        cin >> h >> w >> k;
        brokenWindows.clear();
        for (int i = 0; i < k; i++) {
            cin >> r >> c;
            brokenWindows.push_back({r-1, c-1});
        }
        dp[0][0][0] = 1;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                for (int b = 0; b < k; b++) {
                    if (brokenWindows[b].first == i && brokenWindows[b].second == j) {
                        dp[i][j][1] = 0;
                        break;
                    }
                    dp[i][j][1] = dp[i][j][0];
                }
                if (j > 0) {
                    dp[i][j][0] = (dp[i][j-1][0] + dp[i][j-1][1]) % MOD;
                }
                if (i > 0) {
                    dp[i][j][0] = (dp[i][j][0] + dp[i-1][j][0] + dp[i-1][j][1]) % MOD;
                }
            }
        }
        cout << (dp[h-1][w-1][0] + dp[h-1][w-1][1]) % MOD << endl;
    }
    return 0;
}
