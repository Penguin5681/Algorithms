#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void solve() {
            int N, M;
            cin >> N >> M;
            if (abs(N - M) % 2 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
};

signed main(void) {
    int tc;
    cin >> tc;
    Solution s;
        while (tc--) s.solve(); 
}