#include <bits/stdc++.h>

using namespace std;

void solve() {
    int tc;
    cin >> tc;
        while (tc--) {
            int n;
            cin >> n;
            unordered_map<string, int> blood;
            vector<string> V(n);
            for (auto &it : V) cin >> it;
            for (const auto &it : V) {
                blood[it]++;
            }
            vector<int> V1(4);
            // V1[0] = blood["A"] + blood["AB"];
            // V1[1] = blood["B"] + blood["AB"];
            // V1[2] = blood["AB"];
            // V1[3] = blood["A"] + blood["AB"] + blood["B"] + blood["O"];
            // int rsl = max(V1[0], V1[1]);
            // rsl = max(rsl, V1[3]);
            // cout << rsl << endl;
            int dA = blood["A"] + blood["AB"];
            int dB = blood["B"] + blood["AB"];
            int dAB = blood["AB"];
            int dO = blood["A"] + blood["AB"] + blood["B"] + blood["O"];
            cout << min(dA, dB) + min(dAB, dO) << endl;
        }
}

signed main(void) {
    solve();    
}