#include <bits/stdc++.h>

int CalculatePower(int a, int b) {
    if (b == 0) {
        return 1;
    }
    int result = CalculatePower(a, b - 1);
    return a * result;
}

signed main(void) {
    int N, P;
    std::cin >> N >> P;

    std::cout << CalculatePower(N, P);
}