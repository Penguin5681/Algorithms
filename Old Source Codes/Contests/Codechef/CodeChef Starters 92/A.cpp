#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if ((a + b) + (a * b) == 111) cout << "YES\n";
    else cout << "NO\n";
}

signed main(void) {
    int tc;
    cin >> tc;
        solve();
}