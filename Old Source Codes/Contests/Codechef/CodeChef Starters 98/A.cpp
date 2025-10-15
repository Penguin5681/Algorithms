#include <bits/stdc++.h>

using namespace std;


void solve() {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;
        if (A * 2 + B == X * 2 + Y)
            cout << "Equal\n";
        else if (A * 2 + B < X * 2 + Y) 
            cout << "Messi\n";
        else 
            cout << "Ronaldo\n";
}

signed main(void) {
    solve();
}