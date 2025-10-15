#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void solve() {
            int N, X;
            cin >> N >> X;
            string phoneNo = to_string(N * X);
            bool flag = false;
            if (phoneNo.length() == 5) {
                if (phoneNo[0] != '0')
                    flag = true;
                else flag = false;
            }
            if (flag) cout << "YES\n";
            else cout << "NO\n";
        }
};

signed main(void) {
    int tc;
    cin >> tc;
    Solution s;
        while (tc-- > 0) s.solve();
}