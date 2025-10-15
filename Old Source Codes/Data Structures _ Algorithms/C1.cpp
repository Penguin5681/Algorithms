#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void test_cases() {
            int N;
            cin >> N;
            string St;
            cin >> St;
            string rsl;
                for (int i = 0; i < St.length(); ++i) {
                    if (St[i] != St[i + 1]) rsl.push_back(St[i]);
                }
            cout << rsl << '\n';
        }
};

signed main(void) {
    if (true) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(0);
    }

    Solution run;

    int tc;
    cin >> tc;
        while (tc--) run.test_cases();
}