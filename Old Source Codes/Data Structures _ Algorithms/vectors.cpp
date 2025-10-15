#include <bits/stdc++.h>
#include <vector>

using namespace std;

signed main(void) {
    vector<int> V;
    for(int i = 0 ; i < 10; ++i) {
        V.push_back(i);
    }
    vector<int>::iterator it;
    /* for (it = V.begin(); it != V.end(); ++it) {
        cout << *it << " ";
    } */
    for (auto i : V) {
        cout << i << " ";
    }

    return 0;
}