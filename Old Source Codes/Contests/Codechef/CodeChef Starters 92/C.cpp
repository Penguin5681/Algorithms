#include <bits/stdc++.h>

using namespace std;

void solve() {
    int w, l;
    cin >> w >> l;
    if ((w * l) % 2 == 0) cout << "YES\n";
    else cout << "NO\n";
}

int main(void) {
    int tc;
    cin >> tc;
        while (tc--) solve();
}