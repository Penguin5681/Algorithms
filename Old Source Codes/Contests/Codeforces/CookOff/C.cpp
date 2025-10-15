#include <bits/stdc++.h>
using namespace std;
const int N = 5005;
int T, n, f[N][N], l[N];
char s[N];
int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        cin >> (s + 1);
        memset(f, 0, sizeof f);
        memset(l, 0, sizeof l);
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                if (s[i] == s[j])
                    f[i][j] = f[i + 1][j - 1] + 2;
                l[j - i + 1] = max(l[j - i + 1], f[i][j]);
            }
        }
        int ans = 0;
        for (int i = n - 1; i >= 2; i--)
            l[i] = max(l[i], l[i + 1]);
        for (int i = n; i >= 2; i--)
            if (l[i] >= i) {
                cout << n - i << endl;
                ans = 1;
                break;
            }
        if (!ans)
            cout << -1 << endl;
    }
    return 0;
}
