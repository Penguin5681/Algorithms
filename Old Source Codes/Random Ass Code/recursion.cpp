#include <bits/stdc++.h>

int Sum(int N) {

    if (N == 0) {                   // Base case is always required for recursion
        return 0;
    }
    int preSum = Sum(N - 1);
    return N + preSum;
}

signed main(void) {
    int N;
    std::cin >> N;
    std::cout << Sum(N);
    
    return 0;
}