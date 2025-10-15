#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll maxMD = 1e9 + 7;

class Solution {
    public:
        void solve() {
            ll n;
            cin >> n;
            ll evenCount = 0;
            vector<ll> V(n);
            for (auto &it : V){
                cin >> it;
                if (it % 2 == 0) {
                    evenCount++;
                }    
            }
            ll goodCount = 1;
            if (evenCount < V.size()) {
                for (int i = 1; i <= evenCount; ++i) {
                    goodCount *= 2;
                    goodCount %= maxMD;
                }
                cout << goodCount << endl;
            }
            else {
                for (int i = 1; i < evenCount; ++i) {
                    goodCount *= 2;
                    goodCount %= maxMD;
                }
                cout << goodCount - 1 << endl;
            }

        }
};

signed main(void) {
    Solution s;
    int tc;
    cin >> tc;
        while (tc--) s.solve();
}