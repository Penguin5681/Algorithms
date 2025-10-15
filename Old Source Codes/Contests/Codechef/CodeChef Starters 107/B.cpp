#include <bits/stdc++.h>

using namespace std;

signed main() {
    int tc;
    cin >> tc;
    while (tc -- > 0) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        auto rsl = X * Y;
        if (rsl > Z * 24 * 60)
            cout << "NO\n";
        else cout << "YES\n";
    }
}