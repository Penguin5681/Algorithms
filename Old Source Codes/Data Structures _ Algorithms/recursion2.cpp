#include <bits/stdc++.h>

int Factorial(int N) {
    if (N == 0) {
        return 1;
    }
    return N * Factorial(N - 1);
}

signed main(void) {
    
    int N;
    std::cin >> N;
    std::cout << Factorial(N);
}