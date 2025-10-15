#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        string streak(int N, vector<int> &O, vector<int> &A) {
            int count1 = 0;
            int count2 = 0;
            int maxC1 = 0, maxC2 = 0;
                for (int i = 0; i < N; ++i) {
                    if (O[i] > 0)
                        count1++;
                    else count1 = 0;
                    if (A[i] > 0)
                        count2++;
                    else count2 = 0;
                    maxC1 = max(maxC1, count1);
                    maxC2 = max(maxC2, count2);
                }
            if (maxC1 > maxC2) return "Om";
            else if (maxC2 > maxC1) return "Addy";
            return "Draw";
        }
};

signed main(void) {
    int tc;
    cin >> tc;
        Solution s;
        while (tc--) {
            int n;
            vector<int> O(n), A(n);
            for (auto &it : O) cin >> it;
            for (auto &it : A) cin >> it;
            cout << s.streak(n, O, A) << '\n';
        }
}