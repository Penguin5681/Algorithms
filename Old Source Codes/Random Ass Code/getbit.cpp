#include <bits/stdc++.h>

int getBit(int num, int pos) {
    return ((num & (1 << pos)) != 0);
}

signed main(void) {
    std::cout << getBit(5, 2);
}