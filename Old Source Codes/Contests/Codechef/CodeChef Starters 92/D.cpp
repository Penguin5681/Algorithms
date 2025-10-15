#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, K, L;
    cin >> N >> K >> L;
    vector<pair<int, int>> P;
    
    for (int i = 0; i < N; ++i) {
        cin >> P[i].first >> P[i].second;
    }

    int maxLength = 0;
    for (int i = 0; i < N; ++i) {
        if (P[i].second == L)
            maxLength += P[i].first;
    }
    cout << maxLength << '\n';
}

// Driver Code
signed main(void) {
    int tc;
    cin >> tc;
        while (tc-- > 0) solve();
}