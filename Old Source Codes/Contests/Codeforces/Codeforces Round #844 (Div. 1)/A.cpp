#include <iostream>
#include <cstring>
using namespace std;

int dp[1010][1010][1010];

int solve(int w, int d, int h, int a, int b, int f, int g) {
    memset(dp, 0x3f, sizeof dp);
    dp[a][b][0] = 0;
    for (int i = 0; i <= w; i++) {
        for (int j = 0; j <= d; j++) {
            for (int k = 0; k <= h; k++) {
                if (i < w)
                    dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j][k] + 1);
                if (i > 0)
                    dp[i - 1][j][k] = min(dp[i - 1][j][k], dp[i][j][k] + 1);
                if (j < d)
                    dp[i][j + 1][k] = min(dp[i][j + 1][k], dp[i][j][k] + 1);
                if (j > 0)
                    dp[i][j - 1][k] = min(dp[i][j - 1][k], dp[i][j][k] + 1);
                if (k < h)
                    dp[i][j][k + 1] = min(dp[i][j][k + 1], dp[i][j][k] + 1);
                if (k > 0)
                    dp[i][j][k - 1] = min(dp[i][j][k - 1], dp[i][j][k] + 1);
            }
        }
    }
    return dp[f][g][h];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, d, h, a, b, f, g;
        cin >> w >> d >> h >> a >> b >> f >> g;
        cout << solve(w, d, h, a, b, f, g) << endl;
    }
    return 0;
}
