#include <bits/stdc++.h>

signed main(void) {
    int x = -1;

    try {
        if (x > 0) {
            std::cout << "All good\n";
            throw x;
        }

    }
    catch (int num) {
        std::cout << "Exception Caught\n";
    }
}