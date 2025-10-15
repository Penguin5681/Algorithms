#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<int> V(3);
    for (auto &it : V) cin >> it;
    int count = 0;
    for (int i = 0; i < 3; ++i) {
        if (V[i] == 0) count++;
    }

    if (count >= 2) cout << "Water filling time\n";
    else cout << "Not now\n";
}

signed main(void) {
    int tc;
    cin >> tc;
    while (tc-- > 0) solve();
}