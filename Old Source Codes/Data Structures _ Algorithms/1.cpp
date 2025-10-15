#include <bits/stdc++.h>

using namespace std;

void Solution() {
    int width = 13;
    int length = 11;
    cout << length * width << '\n';
    cout << 2 * (length * width) << '\n';
    width += 2;
    cout << length * width << '\n';
    cout << 2 * (length * width);
}

signed main(void) {
    Solution();
}