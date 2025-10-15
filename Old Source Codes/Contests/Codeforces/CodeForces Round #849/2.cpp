#include <bits/stdc++.h>

using namespace std;

using LL = long long;
using DD = double;
using vi = vector<int>;
using vvi = vector<vector<int>>;
    
#define pi 3.14;

class Solution {
    public:
        string test_cases(int N, string S) {
            int idx = 1, idy = 1;
            int ndx = 0; int ndy = 0;
            for (int i = 0 ; i < S.length(); ++i) {
                if (S[i] == 'U') ndy += 1;
                else if (S[i] == 'R') ndx += 1;
                else if (S[i] == 'L') ndx -= 1;
                else if (S[i] == 'D') ndy -= 1;
            }

            if ((ndx == 1 and ndy == 1) or (ndy == 0 and ndx == 1) or (ndy == 1 and ndx == 0) or (ndy == 0 and ndx == -1) or (ndy == -1 and ndx == 0)) return "YES";
            return "NO";
        }

};

signed main(void) {
    if (1) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(0);
    }

    Solution run;
    int t;
    cin >> t;
        while (t--) {
            int N;
            cin >> N;
            string S;
            cin >> S;
            cout << run.test_cases(N, S) << endl;
        }

    return 0;
}