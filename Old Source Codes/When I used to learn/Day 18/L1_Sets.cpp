#include <bits/stdc++.h>

using namespace std;

signed main(void) {
    // set<int> St;
    // St.insert(1);
    // St.insert(2);
    // St.insert(3);
    // St.insert(4);

    // for (auto i = St.rbegin(); i != St.rend(); ++i)     
        // cout << *i << " "; cout << endl;

    // set<int, greater<int>> St1;
    // St1.insert(1);
    // St1.insert(2);
    // St1.insert(3);
    // St1.insert(4);

    // for (auto i = St1.rbegin(); i != St1.rend(); ++i)     
        // cout << *i << " "; cout << endl;

    // cout << *St1.upper_bound(2); cout << endl;
    // cout << *St1.lower_bound(2);

    set<int> St;
    for (int i = 0; i < int(1e6); ++i) {
        St.insert(rand());
    }
    auto ptr = St.lower_bound(rand());
    cout << (*ptr);   
}

// Ordered Set:
// Unique Element, sorted, implemented using BST
// Random Access in not possible in O(1)/O(log n)