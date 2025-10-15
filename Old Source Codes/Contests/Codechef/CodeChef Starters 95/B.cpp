#include <bits/stdc++.h>

using namespace std;

void solve() {
    int t;
    cin >> t;
        while (t--) {
            int n;
            cin >> n;
            if (n <= 3) cout << "BRONZE\n";
            else if (n > 3 and n <= 6) cout << "SILVER\n";
            else if (n > 6) cout << "GOLD\n";
        }
}

signed main(void) {
    solve();
}