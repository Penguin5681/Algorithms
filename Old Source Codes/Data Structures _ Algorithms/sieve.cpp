#include <bits/stdc++.h>

void PrimeSieve(int n) {
    int prime[100] = {0};

    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) {
            for (int j = i*i; j <= n; j += i) {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) {
            std::cout << i << " ";
        }
    }
    return;
}

int main() {
    
    int N;
    std::cin >> N;
    PrimeSieve(N);

    return 0;
}