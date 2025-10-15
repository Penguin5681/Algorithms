#include <bits/stdc++.h>

using namespace std;

void solution() {
    int tc;
    cin >> tc;
        while (tc--) {
            int n;
            cin >> n;
            vector<int> V(n);
                for (auto &it : V)
                cin >> it;
            
            vector<int> sum;
            int find_max = *max_element(V.begin(), V.end());
            for (int i = 0; i < n; ++i) {
                if (find_max % 2 == 0)
                sum.push_back(find_max);
                else sum.push_back(V[i]);
            }
        }
}

signed main(void) {

}